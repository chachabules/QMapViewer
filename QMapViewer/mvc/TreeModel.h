#ifndef TREEMODEL_H
#define TREEMODEL_H

#include <QAbstractItemModel>
#include <QSharedPointer>

class TreeModelItem;

class TreeModel: public QAbstractItemModel
{
public:
    explicit        TreeModel(QObject *parent = nullptr);

    int             columnCount(const QModelIndex &parent) const override;
    QVariant        data(const QModelIndex &index, int role) const override;
    bool            setData(const QModelIndex &index, const QVariant &value, int role) override;
    QModelIndex     index(int row, int column, const QModelIndex &parent) const override;
    QModelIndex     parent(const QModelIndex &child) const override;
    int             rowCount(const QModelIndex &parent) const override;
    Qt::ItemFlags   flags(const QModelIndex &index) const override;
    QVariant        headerData(int section, Qt::Orientation orientation, int role) const override;
    virtual bool    removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) override;

    void            setRootItem(TreeModelItem *rootItem);
    const TreeModelItem *getRootItem() const;
    TreeModelItem   *getRootItem();
    QModelIndex     indexFromItem(const TreeModelItem *item) const;
    TreeModelItem   *itemFromIndex(const QModelIndex &index);
    const TreeModelItem
                    *itemFromIndex(const QModelIndex &index) const;

private:
    QSharedPointer<TreeModelItem>   rootItem;
    TreeModelItem                   *getItem(const QModelIndex &index) const;

    friend class TreeModelItem;
};

#endif // TREEMODEL_H
