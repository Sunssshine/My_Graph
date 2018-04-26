#ifndef MYSCENE_H
#define MYSCENE_H
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>
class MainWindow;


class MyScene : public QGraphicsScene
{
    //Q_OBJECT
public:
    MyScene(MainWindow* parent = nullptr);
    MainWindow * graph;
protected:
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override;
signals:
    void createNode(QPointF coords);
};

#endif // MYSCENE_H
