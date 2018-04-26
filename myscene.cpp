#include "myscene.h"
#include "mainwindow.h"

MyScene::MyScene(MainWindow *parent)
    : QGraphicsScene(parent)
{
    graph = parent;
}

void MyScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    Node * tmp = new Node(graph);
    graph->choosedNode = tmp;

    if(!graph->renameNode())
    {
        delete tmp;
        return;
    }

    graph->nodes.push_back(tmp);
    addItem(tmp);
    tmp->setPos(event->scenePos());
    graph->resetEulerGraphFinder();
    tmp->update();

}


