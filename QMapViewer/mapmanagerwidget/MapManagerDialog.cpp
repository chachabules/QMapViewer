#include "MapManagerDialog.h"
#include "MapAddDialog.h"
#include "MapLoadDialog.h"
#include "MapUtility.h"
#include "TreeModelStandardItem.h"
#include "ui_MapManagerDialog.h"

#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>

MapManagerDialog::MapManagerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapManagerDialog),
    tablemodel_(new TableModel<MapItem>(this)),
    treemodel_(new TreeModel(this))
{
    ui->setupUi(this);

    initForm();
    initModel();
    initInstance();
}

MapManagerDialog::~MapManagerDialog()
{
    delete ui;
}

void MapManagerDialog::initForm()
{
    this->setWindowTitle(tr("地图管理"));
    ui->tableView->setModel(tablemodel_);
    ui->tableView->setSortingEnabled(false);
    resizeTableColumn();

    ui->treeView->setModel(treemodel_);
    auto *rootItem = new TreeModelStandardItem(2);
    rootItem->setData(0, tr("名称"), Qt::DisplayRole);
    rootItem->setData(1, tr("属性"), Qt::DisplayRole);
    treemodel_->setRootItem(rootItem);
    resizeTreeColumn();
}

void MapManagerDialog::initModel()
{
    tablemodel_->setHeaderData(0, Qt::Horizontal, tr("名称"), Qt::DisplayRole);
    tablemodel_->setHeaderData(1, Qt::Horizontal, tr("位置"), Qt::DisplayRole);
    tablemodel_->setHeaderData(2, Qt::Horizontal, tr("图层级别"), Qt::DisplayRole);

    tablemodel_->addGetter(0, Qt::DisplayRole, &MapItemData::alias_);
    tablemodel_->addGetter(0, Qt::ToolTipRole,
                           [](const MapItemData &data)
                            {
                                return "地点:" + data.alias_;
                            });
    tablemodel_->addGetter(1, Qt::DisplayRole, &MapItemData::dir_);
    tablemodel_->addGetter(1, Qt::ToolTipRole,
                           [](const MapItemData &data)
                            {
                                return "瓦片地图目录:" + data.dir_;
                            });
    tablemodel_->addGetter(2, Qt::DisplayRole, &MapItemData::zoomlevel_);
    tablemodel_->addGetter(2, Qt::ToolTipRole,
                           [](const MapItemData &data)
                            {
                                return "图层级别:" + QString::number(data.zoomlevel_);
    });
}

void MapManagerDialog::initInstance()
{
    connect(ui->pButton_AddMap, &QPushButton::clicked,
            this, &MapManagerDialog::slotAddTileMap);

    connect(ui->pButton_LoadMap, &QPushButton::clicked,
            this, &MapManagerDialog::slotLoadTileMap);
}

void MapManagerDialog::updateTable(MapItemData &data)
{
    tablemodel_->addValue(data);
    resizeTableColumn();
}

void MapManagerDialog::updateTree(DetailMapItemData &data)
{
    auto *rt = new ContentItem(ContentItemData("地图包名", data.alias_));
    auto *rs1 = new ContentItem(ContentItemData("目录", data.dir_));
    auto *rs2 = new ContentItem(ContentItemData("图层级别",
                                                QString::number(data.zoomlevel_)));
    auto *rs3 = new ContentItem(ContentItemData("x范围",
                                                QString("[%1--%2]")
                                                .arg(data.xrange_.first)
                                                .arg(data.xrange_.second)));
    auto *rs4 = new ContentItem(ContentItemData("y范围",
                                                QString("[%1--%2]")
                                                .arg(data.yrange_.first)
                                                .arg(data.yrange_.second)));
    auto *rs5 = new ContentItem(ContentItemData("经度范围",
                                                QString("[%1--%2]")
                                                .arg(data.lonrange_.first)
                                                .arg(data.lonrange_.second)));
    auto *rs6 = new ContentItem(ContentItemData("纬度范围",
                                                QString("[%1--%2]")
                                                .arg(data.latrange_.first)
                                                .arg(data.latrange_.second)));

    rt->appendChild(rs1);
    rt->appendChild(rs2);
    rt->appendChild(rs3);
    rt->appendChild(rs4);
    rt->appendChild(rs5);
    rt->appendChild(rs6);

    treemodel_->getRootItem()->appendChild(rt);
    resizeTableColumn();
}

void MapManagerDialog::resizeTableColumn()
{
    ui->tableView->setColumnWidth(0, 120);
    ui->tableView->setColumnWidth(1, 300);
    ui->tableView->setColumnWidth(2, 120);
}

void MapManagerDialog::resizeTreeColumn()
{
    ui->treeView->setColumnWidth(0, 200);
    ui->treeView->setColumnWidth(1, 340);
}

qint8 MapManagerDialog::AnalyseFileDir(QString dir)
{
    QDir cdir;
    qint8 zlevel = 0;
    if ( cdir.exists(dir) ) {
        cdir.setPath(dir);
        auto dirlst = cdir.entryList(QDir::Dirs, QDir::Name);
        if ( !dirlst.isEmpty() ) {
            for (QString tdir : dirlst) {
                QString zsdir = QDir::fromNativeSeparators(tdir);
                auto zdir = zsdir.split("/");
                if ( !zdir.isEmpty() ) {
                    qint8 zmlevel = static_cast<qint8>(zdir.back().toInt());
                    if ( zmlevel > zlevel ) zlevel = zmlevel;
                }
            }
            if ( zlevel > 18 ) return zlevel = 18;
        }
    }
    return zlevel;
}

void MapManagerDialog::AnalyseMapDetail(const MapItemData &data, DetailMapItemData &detail)
{
    QDir zdir;
    detail.alias_ = data.alias_;
    detail.dir_ = data.dir_;
    detail.zoomlevel_ = data.zoomlevel_;
    // 计算x的范围
    if ( zdir.exists(data.dir_ + "/" + QString::number(data.zoomlevel_)) ) {
        zdir.setPath(data.dir_ + "/" + QString::number(data.zoomlevel_));
        auto xdirlst = zdir.entryList(QDir::Dirs, QDir::Name);
        if ( !xdirlst.isEmpty() ) {
            qint32 xmax = 0;
            qint32 xmin = 0;
            for (const QString &xdir : xdirlst) {
                QString xsdir = QDir::fromNativeSeparators(xdir);
                auto xszdir = xsdir.split("/");
                if ( !xszdir.isEmpty() ) {
                    qint32 x = static_cast<qint32>(xszdir.back().toInt());
                    if ( x == 0 ) continue;
                    if ( xmax == 0 ) xmax = x;
                    if ( xmin == 0 ) xmin = x;
                    if (x < xmin) xmin = x;
                    if (x > xmax) xmax = x;
                }
            }
            detail.xrange_ = {xmin, xmax};
        }
    }
    // 计算y的范围
    QDir xdir;
    if ( xdir.exists(data.dir_ + "/" + QString::number(data.zoomlevel_) + "/" + QString::number(detail.xrange_.first)) ) {
        xdir.setPath(data.dir_ + "/" + QString::number(data.zoomlevel_) + "/" + QString::number(detail.xrange_.first));
        auto ydirlst = xdir.entryList(QDir::Files, QDir::Name);
        if ( !ydirlst.isEmpty() ) {
            qint32 ymax = 0;
            qint32 ymin = 0;
            for (const QString &ydir : ydirlst) {
                QString ysdir = QDir::fromNativeSeparators(ydir);
                auto yszdir = ysdir.split("/");
                if ( !yszdir.isEmpty() ) {
                    qint32 y = static_cast<qint32>(yszdir.back().split(".").first().toInt());
                    if ( y == 0 ) continue;
                    if ( ymax == 0 ) ymax = y;
                    if ( ymin == 0 ) ymin = y;
                    if (y < ymin) ymin = y;
                    if (y > ymax) ymax = y;
                }
            }
            detail.yrange_ = {ymin, ymax};
        }
    }

    // 计算经度和纬度范围
    qreal lonmax = 0;
    qreal latmax = 0;
    qreal lonmin = 0;
    qreal latmin = 0;
    MapUtility::convertTileToGeo(detail.xrange_.first, detail.yrange_.first, detail.zoomlevel_, latmin, lonmin);
    MapUtility::convertTileToGeo(detail.xrange_.second, detail.yrange_.second, detail.zoomlevel_, latmax, lonmax);
    if ( latmax > latmin ) {
        detail.latrange_ = {latmin, latmax};
    } else {
        detail.latrange_ = {latmax, latmin};
    }
    if ( lonmax > lonmin ) {
        detail.lonrange_ = {lonmin, lonmax};
    } else {
        detail.lonrange_ = {lonmax, lonmin};
    }
}

void MapManagerDialog::slotAddTileMap()
{
    QString filePath = QFileDialog::getExistingDirectory(this, "请选择瓦片地图包...");
    if (filePath.isEmpty()) {
        return;
    } else {
        qint8 zlevel = AnalyseFileDir(filePath);
        auto [name, filepath, zoomlevel, rslt] = MapAddDialog::getMapDataInfo(this, filePath, zlevel);
        if (rslt) {
            MapItemData data {name, filepath, zoomlevel};
            updateTable(data);

            DetailMapItemData detaildata;
            AnalyseMapDetail(data, detaildata);
            updateTree(detaildata);
        }
    }
}

void MapManagerDialog::slotLoadTileMap()
{
    if (tablemodel_->getContainer().empty()) return;

    auto tileidx = ui->tableView->currentIndex().row();

    if (tileidx < 0) {
        QMessageBox::information(this, tr("提示"), tr("无效地图包"));
    }

    auto tileinfo = tablemodel_->getValue(tileidx);

    DetailMapItemData detaildata;
    AnalyseMapDetail(tileinfo, detaildata);

    auto [lonpos, latpos, zlevel, result] = MapLoadDialog::getMapLoadInfo(this, detaildata);

    if (zlevel > tileinfo.zoomlevel_) zlevel = tileinfo.zoomlevel_;

    curtileidx_[tileidx] = result;

    if (result) {
        qDebug() << "111";
        emit signLoadTileInfo(detaildata, zlevel, lonpos, latpos);
    }
}
