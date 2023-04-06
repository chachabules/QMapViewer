#include "MapAddDialog.h"
#include "ui_MapAddDialog.h"

MapAddDialog::MapAddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapAddDialog),
    result_(false)
{
    ui->setupUi(this);

    this->setWindowTitle(tr("地图包属性"));

    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &MapAddDialog::slotAcceptResult);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &MapAddDialog::slotRejectResult);
}

MapAddDialog::~MapAddDialog()
{
    delete ui;
}

MapAddDialog::Data MapAddDialog::getMapDataInfo(QWidget *parent, const QString &path, const qint8 &level)
{
//    QColorDialog dialog(Qt::red, this); // 创建对象

//    dialog.setOption(QColorDialog::ShowAlphaChannel);   // 显示 alpha 选项

//    dialog.exec();  // 以模态方式运行对话框

//    QColor color = dialog.currentColor();   // 获取颜色对话框当前颜色

    //    qDebug() <<"color:" <<color;    // 输出颜色信息
    MapAddDialog::Data data;
    MapAddDialog dialog(parent);
    dialog.setPath(path);
    dialog.setlevel(level);
    dialog.show();
    dialog.exec();

    data.name_ = dialog.getName();
    data.path_ = dialog.getPath();
    data.zoomlevel_ = dialog.getLevel();
    data.result_ = dialog.getResult();

    return data;
}

void MapAddDialog::setPath(const QString &path)
{
    ui->lEdit_path->setText(path);
}

QString MapAddDialog::getPath()
{
    return ui->lEdit_path->text();
}

QString MapAddDialog::getName()
{
    return ui->lEdit_name->text();
}

quint8 MapAddDialog::getLevel()
{
    return ui->cBox_level->currentIndex()+1;
}

void MapAddDialog::setlevel(const qint8 &level)
{
    ui->cBox_level->setCurrentIndex(level-1);
}

void MapAddDialog::slotAcceptResult()
{
    result_ = true;
}

void MapAddDialog::slotRejectResult()
{
    result_ = false;
}
