#ifndef MAPMANGERDATA_H
#define MAPMANGERDATA_H

#include "TreeModelCustomItem.h"

#include <QString>
#include <QList>

using QRange = QPair<qint32, qint32>;
using QRangeF = QPair<qreal, qreal>;

/**
 * @brief 瓦片地图包数据
 */
struct MapItemData {
    MapItemData()
            : alias_("Undefine")
            , dir_("")
            , zoomlevel_(1){}

    MapItemData(QString alias, QString dir, quint8 zlevel)
        : alias_(alias)
        , dir_(dir)
        , zoomlevel_(zlevel){}

    QString alias_; ///< 地图包名称
    QString dir_; ///< 所在目录
    quint8 zoomlevel_; ///< 图层级别
};
Q_DECLARE_METATYPE(MapItemData)

using MapItem = QList<MapItemData>;

/**
 * @brief 瓦片地图详细数据
 */
struct DetailMapItemData {
    QString alias_; ///< 地图包名称
    QString dir_; ///< 所在目录
    quint8 zoomlevel_; ///< 图层级别
    QRange xrange_; ///< x范围
    QRange yrange_; ///< y范围
    QRangeF lonrange_; ///< 精度范围
    QRangeF latrange_; ///< 纬度范围

    DetailMapItemData()
        : alias_("Undefine")
        , dir_("")
        , zoomlevel_(0)
        , xrange_({0, 1})
        , yrange_({0, 1})
        , lonrange_({0.0, 1.0})
        , latrange_({0.0, 1.0}){}
};
Q_DECLARE_METATYPE(DetailMapItemData);

struct ContentItemData
{
    ContentItemData(const QString &name, QString proper):
        name(name),
        properity(proper) {}

    QString name;
    QString properity;
};

class ContentItem: public TreeModelCustomItem<ContentItemData>
{
public:
    ContentItem(const ContentItemData &data):
        TreeModelCustomItem(data)
    {
        addGetter(0, Qt::DisplayRole, &ContentItemData::name);
        addGetter(1, Qt::DisplayRole, &ContentItemData::properity);
    }
};

#endif // MAPMANGERDATA_H
