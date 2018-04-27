#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MyScene.h"
#include "node.h"
#include <vector>
#include "edge.h"
#include <QFileDialog>
#include <iostream>
#include <fstream>
#include <string>
#include "renamedialog.h"
#include <QStack>
#include <QMessageBox>
#include "theorywindow.h"
#include "dijkstraresults.h"
#include "dijkstratheory.h"

#include <math.h>

#include <QKeyEvent>


class Node;
class MyScene;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void itemMoved();
    void resetEulerGraphFinder();
    MyScene * scene;
    Node * choosedNode;
    Arrowhead * choosedArrowhead;
    Node * firstConnectingNode = nullptr;
    bool gravity = false;
    std::vector <Node*> nodes;
    QStack <Node*> stack;
    QList <Node*> listOfMoves;
    QGraphicsTextItem * hello;
    int ticksCounter = 0;
    bool findPath(QList<Node *> &path, QList<Edge *> & way, Node *current, Node *destination);
    Node * algoSource = nullptr;
    Node * algoDest = nullptr;

    QList <QList <Node*>> allPaths;
    QList <QList <Edge*>> allWays;
    QList <int> bottleHecks;

    void nextStep_FordFalkerson();
    void prevStep_FordFalkerson();
    void resetFordFalkersonAlgo();

    bool isFordFalkerson = false;

    int currentPath = 0;


    Edge * wayFromTo(Node * source, Node * dest);

    int currentMove = 0;

public slots:
    void setSource();
    void setDestination();
    void startDijkstra();
    bool renameNode();
    void letsCreateNode(QPointF coords);
    void deleteDirection();
    void connectNodes();
    void removeNode();
    void shuffle();
    void zoomIn();
    void zoomOut();
    void changeWeightOfEdge();

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void timerEvent(QTimerEvent *event) override;
/*#if QT_CONFIG(wheelevent)
    void wheelEvent(QWheelEvent *event) override;
#endif*/
    void drawBackground(QPainter *painter, const QRectF &rect);

    void scaleView(qreal scaleFactor);
private slots:

    void createTheoryWindow();

    void exitSlot();

    void createAboutMeWindow();

    void on_openButton_clicked();

    void on_saveButton_clicked();

    void on_clearButton_clicked();

    void on_prevStepButton_clicked();

    void on_nextStepButton_clicked();

    void on_commandLinkButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_checkBox_clicked(bool checked);

    void on_pushButton_clicked();

    void on_start_ford_falkerson_clicked();

private:
    int timerId = 0;
    void createGraph();
    void deleteSpaces(QString & string);
    //Node *centerNode;
    Ui::MainWindow *ui;
    Node * findNode(QString name, std::vector <Node*> list);
    bool tryConnectNodes(Node * source, Node * dest, QString weight);
    bool visitComponentOfGraph(Node * currentNode);
    bool checkInputString();
    bool checkEulerGraph();
    bool findEulerCycle();
    int speedOfAuto = 150;
    bool isAuto = false;
    bool gravityLimited = true;

};

#endif // MAINWINDOW_H
