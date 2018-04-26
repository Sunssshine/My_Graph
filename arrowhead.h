#ifndef ARROWHEAD_H
#define ARROWHEAD_H
#include <QGraphicsItem>
#include <qmath.h>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include "MyAction.h"

class Node;
class Edge;

class Arrowhead : public QGraphicsItem
{
public:
    Arrowhead(Edge * parent, qreal arrowSize, double angle = NULL);

    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    double angle;
    QPointF sourcePoint;
    qreal arrowSize;
    Edge * edge;
    QAction * deleteArrow;
    QAction * changeWeight;


protected:
    //QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;



};

#endif // ARROWHEAD_H
