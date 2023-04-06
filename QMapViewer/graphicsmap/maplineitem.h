#ifndef MAPLINEITEM_H
#define MAPLINEITEM_H

#include <QGraphicsPathItem>
#include <QGeoCoordinate>
#include <QTimer>
#include <QGraphicsPixmapItem>

class MapObjectItem;
class MapLabelItem;

/**
 * @brief 直线
 */
class MapLineItem : public QObject, public QGraphicsLineItem
{
    Q_OBJECT
public:
    MapLineItem();
    ~MapLineItem();
    /**
     * @brief 设置起始点
     */
    void setStartPoint(const QGeoCoordinate & pt);
    /**
     * @brief 设置末端点
     */
    void setEndPoint(const QGeoCoordinate & pt);
    /**
     * @brief 设置文字
     */
    void setText(const QString &text, Qt::Alignment align = Qt::AlignCenter);
    /**
     * @brief 设置文字颜色
     */
    void setTextColor(const QColor &color);
    /**
     * @brief 设置文字大小
     */
    void setFontSizeF(const qreal size);
    /**
     * @brief 设置线宽
     */
    void setLineWidth(const int width);
    /**
     * @brief 设置线段起始图标
     */
    void setStartIcon(const QPixmap &pixmap, Qt::Alignment align = Qt::AlignCenter);
    /**
     * @brief 设置线段末端图标
     */
    void setEndIcon(const QPixmap &pixmap, Qt::Alignment align = Qt::AlignCenter);
    /**
     * @brief 获取线段两点位置
     */
    const QPair<QGeoCoordinate, QGeoCoordinate> &endings();
    /**
     * @brief 依附到地图对象和标签对象，将会自动更新位置
     */
    void attach(MapObjectItem *obj, MapLabelItem *label);
    /// 取消依附地图对象，后续手动更新位置
    void detach();

public:
    /// 获取所有的实例
    static const QSet<MapLineItem*> &items();

private:
    void updateEndings();

private:
    static QSet<MapLineItem*> m_items;         ///< 所有实例

private:
    //
    QGraphicsSimpleTextItem  m_text;
    QGraphicsPixmapItem      m_startIcon;  ///<起始图标
    QGraphicsPixmapItem      m_endIcon;    ///<末端图标
    QPair<QGeoCoordinate, QGeoCoordinate> m_endings;   ///<线段两点
};

#endif // MAPLINEITEM_H
