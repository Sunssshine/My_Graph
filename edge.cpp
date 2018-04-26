#include "edge.h"
#include "node.h"
#include "arrowhead.h"



Edge::Edge(Node *sourceNode, Node *destNode, bool isArrowToSource, bool isArrowToDest)
    : arrowSize(20)
{
    arrowToSource = isArrowToSource;
    arrowToDest = isArrowToDest;
    setAcceptedMouseButtons(0);
    source = sourceNode;
    dest = destNode;
    source->addEdge(this);
    dest->addEdge(this);
    adjust();
    arrowheadToDest = new Arrowhead(this, arrowSize);
    arrowheadToSource = new Arrowhead(this, arrowSize);
    sourceNode->graph->scene->addItem(arrowheadToDest);
    sourceNode->graph->scene->addItem(arrowheadToSource);
}

Node *Edge::sourceNode() const
{
    return source;
}

Node *Edge::destNode() const
{
    return dest;
}

QPainterPath Edge::shape() const
{
    QPainterPath path;
    qreal penWidth = 3;
    qreal extra = (penWidth + arrowSize) / 2.0;

    path.addRect(QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),
                                                    destPoint.y() - sourcePoint.y()))
                      .normalized()
                      .adjusted(-extra, -extra, extra, extra));
    return path;
}

void Edge::adjust()
{
    if (!source || !dest)
        return;

    QLineF line(mapFromItem(source, 0, 0), mapFromItem(dest, 0, 0));
    qreal length = line.length();

    if(arrowheadToDest)
        arrowheadToDest->update();
    if(arrowheadToSource)
        arrowheadToSource->update();
    prepareGeometryChange();

    if (length > qreal(40.)) {
        QPointF edgeOffset((line.dx() * 20) / length, (line.dy() * 20) / length);
        sourcePoint = line.p1() + edgeOffset;
        destPoint = line.p2() - edgeOffset;
    } else {
        sourcePoint = destPoint = line.p1();
    }
}

QRectF Edge::boundingRect() const
{
    if (!source || !dest)
        return QRectF();

    qreal penWidth = 20;
    qreal extra = (penWidth + arrowSize) / 2.0;

    return QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),
                                      destPoint.y() - sourcePoint.y()))
        .normalized()
        .adjusted(-extra, -extra, extra, extra);
}

void Edge::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    if (!source || !dest)
        return;

    QLineF line(sourcePoint, destPoint);
    if (qFuzzyCompare(line.length(), qreal(0.)))
        return;

    // Draw the line itself
    painter->setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    if(isVisited)
        painter->setPen(QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    painter->drawLine(line);

    // Draw the arrows
    double angle = std::atan2(-line.dy(), line.dx());
    //painter->translate(sourcePoint);
    //painter->translate(destPoint);
    //painter->rotate(-angle*(180/M_PI));
    //painter->rotate(angle*(180/M_PI));

    painter->setBrush(Qt::black);
    if(arrowToSource && (line.length() > qreal(17.)))
    {
        arrowheadToSource->setVisible(true);
        arrowheadToSource->setPos(sourcePoint);
    }
    else
        arrowheadToSource->setVisible(false);
    if(arrowToDest && (line.length() > qreal(17.)))
    {
        arrowheadToDest->setVisible(true);
        arrowheadToDest->setPos(destPoint);
    }
    else
        arrowheadToDest->setVisible(false);
    arrowheadToDest->angle = angle + M_PI;
    arrowheadToSource->angle = angle;
    painter->setBrush(Qt::white);
    painter->setPen(Qt::white);
    painter->drawRect(sourcePoint.x()+(destPoint.x()-sourcePoint.x())/2-5,
                      sourcePoint.y()+(destPoint.y()-sourcePoint.y())/2-5, 10, 10);
    painter->setPen(QPen(Qt::magenta, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter->drawText(QPointF(sourcePoint.x()+(destPoint.x()-sourcePoint.x())/2-3,
                              sourcePoint.y()+(destPoint.y()-sourcePoint.y())/2+4),
                      QString::fromStdString(std::to_string(weight)));
    arrowheadToDest->update();
    arrowheadToSource->update();

}
