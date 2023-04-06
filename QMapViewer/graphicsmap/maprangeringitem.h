#ifndef MAPRANGERINGITEM_H
#define MAPRANGERINGITEM_H

#include <QObject>
#include <QGeoCoordinate>
#include <QGraphicsItem>
#include <QPen>
#include <QFont>

class MapObjectItem;

/**
 * @brief 距离环
 * @details 显示三个地理等距椭圆环，如果需要实现屏幕恒等大小的效果，需要外部手动调用setRadius接口来实现
 * 该图形通常显示为椭圆，仅在水平方向和垂直方向的距离较为准确，其他角度通常都有误差，在低纬度上误差较小对结果影响不大
 * @warning 该元素对渲染效率影响较大，会占用过多CPU，暂未找到好的解决方案
 */
class MapRangeRingItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit MapRangeRingItem();
    ~MapRangeRingItem();
    /**
     * @brief 设置是否显示十字架
     */
    void setCrossVisible(bool visible);
    /**
     * @brief 设置位置
     */
    void setCoordinate(const QGeoCoordinate &coord);
    /**
     * @brief 覆盖基类的同名函数，提供信号槽机制
     */
    void setRotation(const qreal &degree);
    /**
     * @brief 设置半径
     */
    void setRadius(const float &km);
    /**
     * @brief 依附到地图对象，将会自动更新位置
     */
    void attach(MapObjectItem *obj);
    /**
     * @brief 取消依附地图对象，后续手动更新位置
     */
    void detach();
    /**
     * @brief 设置画笔
     */
    void setPen(const QPen &pen);
    /**
     * @brief 设置字体
     */
    void setFont(const QFont &font);
    /**
     * @brief 获取画笔
     */
    QPen pen() const;
    /**
     * @brief 获取字体
     */
    QFont font() const;

public:
    /// 获取所有的实例
    static const QSet<MapRangeRingItem*> &items();

public:
    virtual QRectF boundingRect() const override;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

private:
    void updateBoundingRect();

private:
    static QSet<MapRangeRingItem*> m_items;         ///< 所有实例
private:
    QPen   m_pen;
    QFont  m_font;
    bool   m_cross;
    //
    QGeoCoordinate m_coord;     ///< 位置
    float          m_radius;    ///< 半径
    qreal          m_rotation;  ///< 旋转
    //
    QRectF m_boundRect;
    //
    MapObjectItem *m_attachObj;
};

#endif // MAPRANGERINGITEM_H
