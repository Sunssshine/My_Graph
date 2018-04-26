#ifndef EDGE_H
#define EDGE_H

#include "arrowhead.h"

class Node;

class Edge : public QGraphicsItem
{
public:
    Edge(Node *sourceNode, Node *destNode, bool isArrowToSource = false, bool isArrowToDest = false);

    Node *sourceNode() const;
    Node *destNode() const;
    bool arrowToSource = false;
    bool arrowToDest = false;
    QPainterPath shape() const;
    Arrowhead * arrowheadToSource = nullptr;
    Arrowhead * arrowheadToDest = nullptr;
    QPointF sourcePoint;
    QPointF destPoint;
    int weight = 2;
    bool isVisited = false;

    void adjust();

    enum { Type = UserType + 2 };
    int type() const override { return Type; }

protected:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    Node *source, *dest;

    qreal arrowSize;
};

#endif // EDGE_H
