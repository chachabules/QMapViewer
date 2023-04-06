#ifndef MAPLOADDIALOG_H
#define MAPLOADDIALOG_H

#include "MapMangerData.h"

#include <QDialog>

namespace Ui {
class MapLoadDialog;
}

class MapLoadDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MapLoadDialog(QWidget *parent = nullptr);
    ~MapLoadDialog();

    static std::tuple<qreal, qreal, int, bool> getMapLoadInfo(QWidget *parent = nullptr,
                                                        const DetailMapItemData &data = DetailMapItemData());

    qreal getLonCenter();

    qreal getLatCenter();

    int getZoomLevel();

private slots:
    void on_ckBox_lonctr_clicked(bool checked);

    void on_ckBox_latctr_clicked(bool checked);

    void slotRejectResult();

    void slotAcceptResult();

private:
    Ui::MapLoadDialog *ui;
    DetailMapItemData data_;
    bool result_;
};

#endif // MAPLOADDIALOG_H
