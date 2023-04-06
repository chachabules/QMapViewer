#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QOpenGLWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mapManagerDlg_(new MapManagerDialog(this))
{
    ui->setupUi(this);
    initForm();
    initSignSlot();
    loadStyleSheet();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadStyleSheet()
{
    QFile file("Resources/lightstyle.qss");
    if (file.open(QFile::ReadOnly)) {
        QString qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        file.close();
    } else {

    }
}

void MainWindow::initForm()
{
    ui->mapgrapview->setTMSMode(false);
    ui->mapgrapview->setDragMode(QGraphicsView::ScrollHandDrag);
    ui->mapgrapview->setRenderHint(QPainter::Antialiasing, true);
    ui->mapgrapview->setOptimizationFlags(QGraphicsView::DontSavePainterState);
    ui->mapgrapview->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    ui->mapgrapview->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    ui->mapgrapview->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
    ui->mapgrapview->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
    ui->mapgrapview->setViewport(new QOpenGLWidget);
}

void MainWindow::initSignSlot()
{
    qRegisterMetaType<DetailMapItemData>("DetailMapItemData");
    connect(ui->pButton_MapManager, &QPushButton::clicked,
            this, &MainWindow::slotDispMapMangerDlg);
    connect(mapManagerDlg_, &MapManagerDialog::signLoadTileInfo,
            this, &MainWindow::slotLoadTileInfo);

    connect(ui->pButton_AddMap, &QPushButton::clicked, this, [&](){
        mapManagerDlg_->show();
        mapManagerDlg_->slotAddTileMap();
    });

    connect(ui->pButton_Zoomup, &QPushButton::clicked, this, [&](){
        ui->mapgrapview->setZoomLevel(ui->mapgrapview->zoomLevel() + 0.2);
    });

    connect(ui->pButton_Zoomdown, &QPushButton::clicked, this, [&](){
        ui->mapgrapview->setZoomLevel(ui->mapgrapview->zoomLevel() - 0.2);
    });
}

void MainWindow::slotDispMapMangerDlg()
{
    if (mapManagerDlg_->isHidden()) {
        mapManagerDlg_->show();
    } else {
        mapManagerDlg_->hide();
    }

}

void MainWindow::slotLoadTileInfo(DetailMapItemData data, int zlevel, qreal lon, qreal lat)
{
    ui->mapgrapview->setZoomLevel(zlevel);
    ui->mapgrapview->setZoomable(true);
    ui->mapgrapview->setZoomRange(11, data.zoomlevel_);
    ui->mapgrapview->setTilePath(data.dir_);
    ui->mapgrapview->centerOn(QGeoCoordinate{lat,lon});
}

