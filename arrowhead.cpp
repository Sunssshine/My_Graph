#include "arrowhead.h"
#include "edge.h"
#include "node.h"

Arrowhead::Arrowhead(Edge * parent, qreal arrowSize, double angle)
{
    this->angle = angle;
    this->arrowSize = arrowSize;
    this->edge = parent;
    this->deleteArrow = new QAction("Delete direction");
    this->changeWeight = new QAction("Change weight");
    QObject::connect(deleteArrow, &QAction::triggered,
                     parent->sourceNode()->graph, &MainWindow::deleteDirection);
    QObject::connect(changeWeight, &QAction::triggered,
                     parent->sourceNode()->graph, &MainWindow::changeWeightOfEdge);
}

QRectF Arrowhead::boundingRect() const
{
    qreal adjust = 2;
    return QRectF( -20 - adjust, -20 - adjust, 30 + adjust, 30 + adjust);
}

QPainterPath Arrowhead::shape() const
{
    QPainterPath path;
    QPointF sourceArrowP1 = QPointF(sin(angle + M_PI / 3) * arrowSize,
                                                      cos(angle + M_PI / 3) * arrowSize);
    QPointF sourceArrowP2 = QPointF(sin(angle + M_PI - M_PI / 3) * arrowSize,
                                                      cos(angle + M_PI - M_PI / 3) * arrowSize);
    path.addPolygon(QPolygonF() << QPoint(0,0) << sourceArrowP1 << sourceArrowP2);
    return path;
}

void Arrowhead::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //double angle = std::atan2(-line.dy(), line.dx());
    painter->setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter->setBrush(Qt::black);
    if(edge->isVisited)
    {
        painter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        painter->setBrush(Qt::red);
    }
    QPointF sourceArrowP1 = QPointF(sin(angle + M_PI / 3) * arrowSize,
                                                      cos(angle + M_PI / 3) * arrowSize);
    QPointF sourceArrowP2 = QPointF(sin(angle + M_PI - M_PI / 3) * arrowSize,
                                                      cos(angle + M_PI - M_PI / 3) * arrowSize);
    painter->drawPolygon(QPolygonF() << QPointF(0,0) << sourceArrowP1 << sourceArrowP2);
}

//QVariant Arrowhead::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value)
//{

//}

void Arrowhead::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    edge->sourceNode()->graph->choosedArrowhead = this;
    QMenu menu;
    menu.addAction(deleteArrow);
    menu.addAction(changeWeight);
    menu.exec(event->screenPos());
}

void Arrowhead::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

void Arrowhead::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}
