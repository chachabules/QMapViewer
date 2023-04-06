#include "MapLoadDialog.h"
#include "ui_MapLoadDialog.h"

MapLoadDialog::MapLoadDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapLoadDialog),
    result_(false)
{
    ui->setupUi(this);

    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &MapLoadDialog::slotAcceptResult);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &MapLoadDialog::slotRejectResult);
}

MapLoadDialog::~MapLoadDialog()
{
    delete ui;
}

std::tuple<qreal, qreal, int, bool> MapLoadDialog::getMapLoadInfo(QWidget *parent, const DetailMapItemData &data)
{
    MapLoadDialog dialog(parent);
    dialog.data_ = data;
    dialog.ui->lEdit_name->setText(data.alias_);
    dialog.ui->lEdit_latrange->setText(QString("[%1~%2]")
                                       .arg(data.latrange_.first)
                                       .arg(data.latrange_.second));
    dialog.ui->lEdit_lonrange->setText(QString("[%1~%2]")
                                       .arg(data.lonrange_.first)
                                       .arg(data.lonrange_.second));

    dialog.show();
    dialog.exec();
    qreal lon = dialog.getLonCenter();
    qreal lat = dialog.getLatCenter();
    int zlevel = dialog.getZoomLevel();
    return {lon, lat, zlevel, dialog.result_};
}

qreal MapLoadDialog::getLonCenter()
{
    return ui->lEdit_loncenter->text().toDouble();
}

qreal MapLoadDialog::getLatCenter()
{
    return ui->lEdit_latcenter->text().toDouble();
}

int MapLoadDialog::getZoomLevel()
{
    return ui->cmBox_zoomlevel->currentIndex()+1;
}

void MapLoadDialog::on_ckBox_lonctr_clicked(bool checked)
{
    if (checked) {
        ui->lEdit_loncenter->setText(QString::number((data_.lonrange_.first
                                                     +data_.lonrange_.second)/2.0));
    }
}

void MapLoadDialog::on_ckBox_latctr_clicked(bool checked)
{
    if (checked) {
        ui->lEdit_latcenter->setText(QString::number((data_.latrange_.first
                                                     +data_.latrange_.second)/2.0));
    }
}

void MapLoadDialog::slotRejectResult()
{
    result_ = false;
}

void MapLoadDialog::slotAcceptResult()
{
    result_ = true;
}
