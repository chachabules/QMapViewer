#ifndef MAPMANAGERDIALOG_H
#define MAPMANAGERDIALOG_H

#include "TableModel.h"
#include "TreeModel.h"
#include "MapMangerData.h"

#include <QDialog>

namespace Ui {
class MapManagerDialog;
}

class MapManagerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MapManagerDialog(QWidget *parent = nullptr);
    ~MapManagerDialog();

private:
    void initForm();
    void initModel();
    void initInstance();

    void updateTable(MapItemData &data);

    void updateTree(DetailMapItemData &data);

    void resizeTableColumn();

    void resizeTreeColumn();

    qint8 AnalyseFileDir(QString dir);

    void extracted(QStringList &xdirlst, qint32 &xmax, qint32 &xmin);
    void AnalyseMapDetail(const MapItemData &data, DetailMapItemData &detail);

public slots:
    void slotAddTileMap();

    void slotLoadTileMap();

signals:
    void signLoadTileInfo(DetailMapItemData, int, qreal, qreal);

private:
    Ui::MapManagerDialog *ui;
    TableModel<MapItem>* tablemodel_;
    TreeModel* treemodel_;
    QMap<int, bool> curtileidx_; ///< 瓦片地图的载入情况

};

#endif // MAPMANAGERDIALOG_H
