#include "edge.h"
#include "node.h"
#include <vector>
//#include "mainwindow.h"

Node::Node(MainWindow *graphWidget, QString name)
    : graph(graphWidget)
{
    setFlag(ItemIsMovable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
    deleteNodeAction = new QAction("Delete");
    connectAction = new QAction ("Connect");
    renameAction = new QAction("Rename");
    dijkstraStart = new QAction("Dijkstra");
    connectAction->setCheckable(true);
    QObject::connect(deleteNodeAction, &QAction::triggered, graph, &MainWindow::removeNode);
    QObject::connect(connectAction, &QAction::triggered, graph, &MainWindow::connectNodes);
    QObject::connect(renameAction, &QAction::triggered, graph, &MainWindow::renameNode);
    QObject::connect(dijkstraStart, &QAction::triggered, graph, &MainWindow::startDijkstra);
    text = name;

}

void Node::addEdge(Edge *edge)
{
    edgeList << edge;
    edge->adjust();
}

QList<Edge *> Node::edges() const
{
    return edgeList;
}

void Node::calculateForces()
{
    if (!scene() || scene()->mouseGrabberItem() == this) {
            newPos = pos();
            return;
        }
    //! [2]

    //! [3]
        // Sum up all forces pushing this item away
        qreal xvel = 0;
        qreal yvel = 0;
        foreach (QGraphicsItem *item, scene()->items()) {
            Node *node = qgraphicsitem_cast<Node *>(item);
            if (!node)
                continue;

            QPointF vec = mapToItem(node, 0, 0);
            qreal dx = vec.x();
            qreal dy = vec.y();
            double l = 0.5 * (dx * dx + dy * dy);
            if (l > 0) {
                xvel += (dx * 400.0) / l;
                yvel += (dy * 400.0) / l;
            }
        }
    //! [3]

    //! [4]
        // Now subtract all forces pulling items together
        double weight = (edgeList.size() + 1) * 5;
        foreach (Edge *edge, edgeList) {
            QPointF vec;
            if (edge->sourceNode() == this)
                vec = mapToItem(edge->destNode(), 0, 0);
            else
                vec = mapToItem(edge->sourceNode(), 0, 0);
            xvel -= vec.x() / weight;
            yvel -= vec.y() / weight;
        }
    //! [4]

    //! [5]
        if (!graph->gravity){
            xvel = yvel = 0;
        }
        else if (qAbs(xvel) < 0.1 && qAbs(yvel) < 0.1)
            xvel = yvel = 0;
    //! [5]

    //! [6]
        QRectF sceneRect = scene()->sceneRect();
        newPos = pos() + QPointF(xvel, yvel);
        newPos.setX(qMin(qMax(newPos.x(), sceneRect.left() + 10), sceneRect.right() - 10));
        newPos.setY(qMin(qMax(newPos.y(), sceneRect.top() + 10), sceneRect.bottom() - 10));
}

bool Node::advance()
{
    if (newPos == pos())
        return false;

    setPos(newPos);
    return true;
}

QRectF Node::boundingRect() const
{
    qreal adjust = 2;
    return QRectF( -20 - adjust, -20 - adjust, 43 + adjust, 43 + adjust);
}

QPainterPath Node::shape() const
{
    QPainterPath path;
    path.addEllipse(-20, -20, 40, 40);
    return path;
}

void Node::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *)
{
    painter->setPen(Qt::NoPen);
    painter->setBrush(Qt::darkGray);
    painter->drawEllipse(-17, -17, 40, 40);
    QPen myPen;
    QRadialGradient gradient(-3, -3, 20);
    if (isChoosed)
    {
        gradient.setCenter(3, 3);
        gradient.setFocalPoint(3, 3);
        gradient.setColorAt(1, QColor(Qt::red).light(120));
        gradient.setColorAt(0, QColor(Qt::darkRed).light(120));
        myPen = QPen(Qt::black, 2);
    }
    else if (isPressed)
    {
        gradient.setCenter(3, 3);
        gradient.setFocalPoint(3, 3);
        gradient.setColorAt(1, QColor(Qt::cyan).light(120));
        gradient.setColorAt(0, QColor(Qt::darkCyan).light(120));
        myPen = QPen(Qt::white, 2);
    }
    else
    {
        myPen = QPen(Qt::white, 2);
        gradient.setColorAt(0, Qt::blue);
        gradient.setColorAt(1, Qt::darkBlue);
    }
    painter->setBrush(gradient);

    painter->setPen(QPen(Qt::black, 2));
    painter->drawEllipse(-20, -20, 40, 40);
    painter->setPen(myPen);
    painter->setFont(QFont("Times", 12, QFont::Bold));
    painter->drawText(QRectF(-6,-10, 40, 40), text);
    update();
}

QVariant Node::itemChange(GraphicsItemChange change, const QVariant &value)
{
    switch (change) {
    case ItemPositionHasChanged:
        foreach (Edge *edge, edgeList)
            edge->adjust();
        graph->itemMoved();
        break;
    default:
        break;
    };

    return QGraphicsItem::itemChange(change, value);
}

void Node::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    this->isPressed = true;
    graph->choosedNode = this;
    if(graph->firstConnectingNode)
        connectAction->setChecked(true);
    else
        connectAction->setChecked(false);

    if(graph->firstConnectingNode == graph->choosedNode)
    {
        connectAction->setDisabled(true);
        //graph->firstConnectingNode = nullptr;
    }

    QMenu menu;
    if(graph->firstConnectingNode)
        graph->firstConnectingNode->update();
    update();
    menu.addAction(deleteNodeAction);
    menu.addAction(connectAction);
    menu.addAction(renameAction);
    menu.addAction(dijkstraStart);
    menu.exec(event->screenPos());
    connectAction->setEnabled(true);
    if(graph->firstConnectingNode)
        graph->firstConnectingNode->update();
    isPressed = false;
    update();
    return;

}

void Node::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->isPressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);

}

void Node::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseReleaseEvent(event);
    this->isPressed = false;
}

void Node::triggerDelete()
{
    graph->scene->removeItem(this);
}

