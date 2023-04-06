#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "MapManagerDialog.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void loadStyleSheet();

    void initForm();

    void initSignSlot();

signals:
    void signRegisterTileLoader(int, QString);

private slots:
    void slotDispMapMangerDlg();

    void slotLoadTileInfo(DetailMapItemData data, int zlevel, qreal lon, qreal lat);

private:
    Ui::MainWindow *ui;
    MapManagerDialog * mapManagerDlg_;
};

#endif // MAINWINDOW_H
