#ifndef MAPLABELITEM_H
#define MAPLABELITEM_H

#include <QObject>
#include <QGraphicsPixmapItem>

/**
 * @brief 地图文本标签对象
 * @details 可显示文字和背景图片。请确保先设置文本字体样式再设置文本
 */
class MapLabelItem : public QGraphicsPixmapItem
{
public:
    MapLabelItem();
    /**
     * @brief 设置背景图片
     */
    void setBackground(const QPixmap &pixmap);
    /**
     * @brief 设置标题
     */
    void setTitle(const QString &title);
    /**
     * @brief 获取标题对象
     */
    QGraphicsSimpleTextItem *title();
    /**
     * @brief 设置文本内容
     */
    void setText(const QString &text);
    /**
     * @brief 获取标题对象
     */
    QGraphicsSimpleTextItem *text();

private:
    void updateLayout();

private:
    QGraphicsSimpleTextItem m_title;
    QGraphicsSimpleTextItem m_text;
};

#endif // MAPLABELITEM_H
