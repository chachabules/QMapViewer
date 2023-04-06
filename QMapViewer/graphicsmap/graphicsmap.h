#ifndef GRAPHICSMAP_H
#define GRAPHICSMAP_H

#include <QWidget>
#include <QGraphicsView>
#include <QWheelEvent>
#include <QCache>
#include <QGeoCoordinate>
#include <QTimer>

/// 瓦片参数描述结构体
struct TileSpec {
    quint8 type;  ///< 瓦片类型（用于标识不同路劲资源的地图)
    quint8 zoom;  ///< 瓦片层级
    quint32 x;    ///< 瓦片X轴编号
    quint32 y;    ///< 瓦片Y轴编号
    inline TileSpec rise() const {
        return TileSpec({type, static_cast<quint8>(zoom-1), x/2, y/2});
    }
    inline bool operator< (const TileSpec &rhs) const {
        return this->toLong() < rhs.toLong();
    };
    inline bool operator== (const TileSpec &rhs) const {
        return this->toLong() == rhs.toLong();
    };
    inline qlonglong toLong() const {
        return (qlonglong(type)<<52) | (qlonglong(zoom)<< 44) | (qlonglong(x)<< 22) | y;
    };
};
/// 显示瓦片区域
struct TileRegion {
    TileSpec origin;  ///< 起始瓦片
    qreal   rotation;   ///< 旋转角度
    quint8  horCount;   ///< 水平方向瓦片数量
    quint8  verCount;   ///< 垂直方向瓦片数量
    inline bool operator== (const TileRegion &rhs) const {
        return origin == rhs.origin && rotation == rhs.rotation && horCount == rhs.horCount && verCount == rhs.verCount;
    }
};
Q_DECLARE_METATYPE(TileSpec);
Q_DECLARE_METATYPE(TileRegion);

class GraphicsMapThread;
/**
 * @brief 基于Graphics View的地图
 * @details 其仅用于显示瓦片地图，要实现地图以外的功能可以继承该类
 * @note 鼠标拖拽地图可通过setDragMode(QGraphicsView::ScrollHandDrag)实现
 * @bug QGraphicsView::centerOn函数会造成1个像素的抖动问题，参见源码https://github.com/qt/qtbase/blob/5.12.8/src/widgets/graphicsview/qgraphicsview.cpp 1936行
 */
class GraphicsMap : public QGraphicsView
{
    Q_OBJECT
public:

    GraphicsMap(QWidget *parent = nullptr);
    ~GraphicsMap();
    /**
     * @brief 设置更新帧率
     * @param fps 地图定时刷新的帧率，0或者负值可切换为按需更新
     */
    void setFrameRate(int fps);
    /**
     * @brief 设置瓦片路径
     * @param path
     */
    void setTilePath(const QString &path);
    /**
     * @brief 设置缩放等级
     * @param zoom
     */
    void setZoomLevel(float zoom);
    const float &zoomLevel() const;
    /**
     * @brief 设置缩放等级范围
     * @param min
     * @param max
     */
    void setZoomRange(int min, int max);
    /// 设置朝向，正北为起始，向右为正，向左为负 \bug 由于QGraphicsView滚动条精度问题，会造成中心点抖动
    void setRotation(const qreal &degree);
    /**
     * @brief 获取当前朝向
     * @return
     */
    const qreal &rotation() const;
    /**
     * @brief 设置瓦片缓存数量 默认1000张瓦片
     * @param count
     */
    void setTileCacheCount(const int &count);
    /**
     * @brief 设置TMS瓦片协议 默认XYZ协议（在TMS协议中，y=0的瓦片是最南边的瓦片，而在XYZ模式(OGC WMTS也使用)中，y=0的瓦片是最北边的瓦片)
     * @param on
     */
    void setTMSMode(const bool &on);
    using QGraphicsView::centerOn;
    /**
     * @brief 居中
     * @param coord
     */
    void centerOn(const QGeoCoordinate &coord);
    /**
     * @brief 获取窗口坐标对应的经纬度
     * @param point
     * @return
     */
    QGeoCoordinate toCoordinate(const QPoint &point) const;
    /**
     * @brief 获取经纬度对应的窗口坐标
     * @param coord
     * @return
     */
    QPoint toPoint(const QGeoCoordinate &coord) const;

public:
    /**
     * @brief 获取场景坐标对应的经纬度
     * @param point
     * @return
     */
    static QGeoCoordinate toCoordinate(const QPointF &point);
    /**
     * @brief 获取经纬度对应的场景坐标
     * @param coord
     * @return
     */
    static QPointF toScene(const QGeoCoordinate &coord);
    /**
     * @brief 通过资源路径，获取唯一对应的资源类型
     * @param path
     * @return
     */
    static quint8 mapType(const QString &path);


signals:
    void zoomChanged(const float &zoom);
    void tileRequested(const TileRegion &region);
    void pathRequested(const QString &path);

protected:
    /**
     * @brief 用于限制地图最小缩放等级
     * @param event
     */
    virtual void resizeEvent(QResizeEvent *event) override;

private:
    void init();
    void updateTile();

private:
    static QStringList m_mapTypes; ///< 资源路径类型
private:
    GraphicsMapThread    *m_mapThread;
    QSet<QGraphicsItem*> m_tiles;          ///< 已显示瓦片
    quint8               m_type;           ///< 瓦片资源类型
    QTimer               m_updateTimer;    ///< 更新定时器
    //
    TileRegion m_tileRegion;    ///< 显示瓦片区域
    //
    bool  m_isloading;          ///< 正在加载地图
    bool  m_hasPendingLoad;     ///< 是否有挂起的加载请求
    float m_zoom;               ///< 当前层级
    float m_minZoom;            ///< 最小缩放层级，刚好适应窗口大小
    float m_maxZoom;            ///< 最大缩放层级，防止无限放大
    float m_preferMinZoom;      ///< 预期最小缩放层级，-1代表未设置
    qreal m_rotation;           ///< 旋转角度
};

inline uint qHash(const TileSpec &key, uint seed)
{
    qlonglong keyVal = (qlonglong(key.zoom)<<48) + (qlonglong(key.x)<< 24) + key.y;
    return qHash(keyVal, seed);
}

/*!
 * \brief 瓦片地图管理线程
 * \details 负责加载瓦片、卸载瓦片
 */
class GraphicsMapThread : public QObject
{
    Q_OBJECT

    /// 瓦片缓存节点，配合QCache实现缓存机制
    struct TileCacheNode {
        TileSpec tileSpec;
        QGraphicsItem *value = nullptr;
        ~TileCacheNode();
    };

public:
    GraphicsMapThread();
    ~GraphicsMapThread();


public slots:
    /**
     * @brief 请求刷新瓦片区域
     * @param region
     */
    void requestTile(const TileRegion &region);
    /**
     * @brief 请求更改瓦片资源来源
     * @param path
     */
    void requestPath(const QString &path);

public:
    /**
     * @brief 设置瓦片缓存数量 默认1000张瓦片
     * @param count
     */
    void setTileCacheCount(const int &count);
    /**
     * @brief 设置TMS瓦片协议 默认XYZ协议（在TMS协议中，y=0的瓦片是最南边的瓦片，而在XYZ模式(OGC WMTS也使用)中，y=0的瓦片是最北边的瓦片)
     * @param on
     */
    void setTMSMode(const bool &on);

signals:
    void tileToAdd(QGraphicsItem *tile);
    void tileToRemove(QGraphicsItem *tile);
    void requestFinished();

private:
    void showItem(const TileSpec &tileSpec);
    void hideItem(const TileSpec &tileSpec);
    /**
     * @brief 从磁盘加载瓦片文件
     * @param tileSpec
     * @return
     */
    QGraphicsPixmapItem* loadTileItem(const TileSpec &tileSpec);
    void createAscendingTileCache(const TileSpec &tileSpec, QSet<TileSpec> &sets);

private:
    QCache<TileSpec, TileCacheNode> m_tileCache; ///<已加载瓦片缓存
    QSet<TileSpec>    m_tileTriedToShowdSet;     ///<已尝试显示瓦片编号集合(上一次调用过showItem的所有瓦片，存在依赖关系的瓦片，实际上只有顶层才显示)
    QSet<TileSpec>    m_tileShowedSet;           ///<实际显示瓦片编号集合
    //
    TileRegion m_tileRegion;    ///< 请求的瓦片区域
    //
    QString          m_path;
    bool             m_bTMS;
};

#endif // GRAPHICSMAP_H
