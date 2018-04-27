#ifndef NODE_H
#define NODE_H

#include <QGraphicsItem>
#include <QList>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include "mainwindow.h"
#include "edge.h"
#include <QString>
#include <vector>

class Edge;
class MainWindow;
class QGraphicsSceneMouseEvent;

class Node : public QGraphicsItem, QObject
{
public:
    Node(MainWindow *graphWidget, QString name = "");

    void addEdge(Edge *edge);
    QList<Edge *> edges() const;

    enum { Type = UserType + 1 };
    int type() const override { return Type; }

    void calculateForces();
    bool advance();
    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QList<Edge *> edgeList;
    bool isChoosed = false;
    bool isPressed = false;
    bool isMarked = false;
    int weight = 0;
    bool isAllCyclesFounded = false;
    bool isPushed = false;
    bool isVisited = false;

    MainWindow *graph;
    QString text = "X";

protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

public slots:
    void triggerDelete();

private:
    QPointF newPos;
    QAction * dijkstraStart;
    QAction * renameAction;
    QAction * connectAction;
    QAction * deleteNodeAction;
    QAction * setSource;
    QAction * setDestination;
};

#endif // NODE_H
