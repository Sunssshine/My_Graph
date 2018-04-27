#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutwindow.h"
#include "helpbrowser.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new MyScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    ui->graphicsView->scale(qreal(0.8), qreal(0.8));
    ui->graphicsView->setMinimumSize(600, 400);
    ui->graphicsView->setMaximumSize(600, 400);
    ui->pushButton_2->setCheckable(true);
    scene->setSceneRect(ui->graphicsView->rect()+=QMargins(50,50,30,30));
    hello = new QGraphicsTextItem("GRAPH");
    hello->setFont(QFont("Times", 100, QFont::Bold));
    scene->addItem(hello);
    hello->setPos(0,0);
    setWindowTitle(tr("Graph"));
    setWindowIcon(QIcon(":/images/pictures/graph_ico.ico"));
    ui->nextStepButton->hide();
    ui->prevStepButton->hide();
    ui->pushButton_2->hide();
    ui->horizontalSlider->hide();
    connect(ui->aboutAction, SIGNAL(triggered(bool)), this, SLOT(createAboutMeWindow()));
    connect(ui->actionExit, SIGNAL(triggered(bool)), this, SLOT(exitSlot()));
    connect(ui->actionInformation, SIGNAL(triggered(bool)), this, SLOT(createTheoryWindow()));

//    int howMuchNodes = 6;
//    for(int i = 0, row=0, column=0; i<howMuchNodes; i++)
//    {
//        nodes.push_back(new Node(this));
//        scene->addItem(nodes[i]);
//        if(i>0)
//            scene->addItem(new Edge(nodes[i], nodes[i-1], true, false));
//        if(column>6)
//        {
//            row++;
//            column=0;
//        }
//        nodes[i]->setPos(column*100,row*100);
//        column++;
//    }

    //scene->addItem(new Edge(node1, node2));
    //scene->addItem(new Edge(node2, node3));
//    scene->addItem(new Edge(node2, centerNode));
//    scene->addItem(new Edge(node3, node6, true, true));
//    scene->addItem(new Edge(node4, node1, true, false));
//    scene->addItem(new Edge(node4, centerNode, false, true));
//    scene->addItem(new Edge(centerNode, node6, false,false));
//    scene->addItem(new Edge(centerNode, node8));
//    scene->addItem(new Edge(node6, node9));
//    scene->addItem(new Edge(node7, node4));
//    scene->addItem(new Edge(node8, node7));
//    scene->addItem(new Edge(node9, node8));

//    node1->setPos(0, -50);
//    node2->setPos(0, -50);
//    node3->setPos(50, -50);
//    node4->setPos(-50, 0);
//    centerNode->setPos(0, 0);
//    node6->setPos(50, 0);
//    node7->setPos(-50, 50);
//    node8->setPos(0, 50);
//    node9->setPos(50, 50);
    startTimer(5);
}

void MainWindow::itemMoved()
{
    if (!timerId)
        timerId = startTimer(5);
}

Edge *MainWindow::wayFromTo(Node *source, Node *dest)
{
    foreach(Edge * edge, source->edgeList)
    {
        if((edge->sourceNode() == source)
                && (edge->destNode() == dest)
                && (edge->arrowToDest))
        {
            return edge;
        }
        if((edge->sourceNode() == dest)
                && (edge->destNode() == source)
                && (edge->arrowToSource))
        {
            return edge;
        }
    }
    return nullptr;
}

void MainWindow::setSource()
{
    if(algoSource)
    {
        algoSource->isVisited = false;
        algoSource->update();
    }
    algoSource = choosedNode;
    algoSource->isVisited = true;
    algoSource->update();
}

void MainWindow::setDestination()
{
    Node * tmp = nullptr;
    if(algoDest)
        tmp = algoDest;

    algoDest = choosedNode;
    algoDest->update();

    if(tmp)
        tmp->update();
}

void MainWindow::startDijkstra()
{
    foreach(Node * node, nodes)
    {
        node->isMarked = false;
        node->weight = 2000000;
    }

    choosedNode->weight = 0;

    int counterOfMarked = 0;

    while(counterOfMarked != nodes.size())
    {
        Node * lessNode = nullptr;
        foreach(Node * node, nodes)
        {

            if(!node->isMarked)
            {
            if(lessNode == nullptr)
                lessNode = node;

            if((node->weight < lessNode->weight))
                lessNode = node;
            }
        }

        if(!lessNode)
            return;

        if(lessNode->weight == 2000000)
        {
            lessNode->isMarked = true;
            counterOfMarked++;
            continue;
        }

        foreach(Node * node, nodes)
        {
            Edge * tmp = wayFromTo(lessNode, node);

            if(tmp)
            {
                //if(tmp->destNode()->weight == INFINITY || tmp->sourceNode()->weight == INFINITY)
                  //  continue;

                if((lessNode == tmp->sourceNode()) && !tmp->destNode()->isMarked)
                {
                    if(tmp->destNode()->weight > lessNode->weight + tmp->weight)
                    {
                        tmp->destNode()->weight = lessNode->weight + tmp->weight;
                    }
                }
                else if((lessNode == tmp->destNode()) && !tmp->sourceNode()->isMarked)
                {
                    if(tmp->sourceNode()->weight > lessNode->weight + tmp->weight)
                    {
                        tmp->sourceNode()->weight = lessNode->weight + tmp->weight;
                    }
                }
            }
        }
        lessNode->isMarked = true;
        counterOfMarked++;
    }

    QString tmp = "Все возможные пути от точки (";
    tmp+=choosedNode->text;
    tmp+="): \n\n";
    foreach(Node * node, nodes)
    {
        if(node->weight == 2000000)
        {
            tmp+="Точка (";
            tmp+=node->text;
            tmp+=") недостижима из точки (";
            tmp+=choosedNode->text;
            tmp+=")\n";
            continue;
        }

        if(node == choosedNode)
            continue;

        tmp+="Кратчайший путь до точки (";
        tmp+=node->text;
        tmp+=") составляет ";
        tmp+=QString::fromStdString(std::to_string(node->weight));
        tmp+=" единиц.\n";
    }
    DijkstraResults * results = new DijkstraResults(tmp);
    results->show();

}

bool MainWindow::renameNode()
{
    RenameDialog renameWindow("Rename");
    renameWindow.move(QCursor::pos()-QPoint(100,40));
    renameWindow.exec();

    if(findNode(renameWindow.newName, nodes))
    {
        QMessageBox::information(this, "Внимание","Точка с таким названием уже существует.");
        return false;
    }

    if(!renameWindow.newName.size())
    {
        QMessageBox::information(this, "Внимание","Название точки не было введено.");
        return false;
    }

    for(size_t i = 0; i<renameWindow.newName.size(); i++)
        if(!renameWindow.newName[i].isLetter())
        {
            QMessageBox::information(this, "Внимание","Название точки содержит что-то кроме букв.");
            return false;
        }

    choosedNode->text = renameWindow.newName;
    return true;

}

void MainWindow::letsCreateNode(QPointF coords)
{
    nodes.push_back(new Node(this));
    scene->addItem(nodes.back());
    nodes.back()->setPos(coords);
    resetEulerGraphFinder();
}

void MainWindow::deleteDirection()
{
    if(choosedArrowhead->pos() == choosedArrowhead->edge->sourcePoint)
        choosedArrowhead->edge->arrowToSource = false;
    else
        choosedArrowhead->edge->arrowToDest = false;
    if(!choosedArrowhead->edge->arrowToDest && !choosedArrowhead->edge->arrowToSource)
    {
        scene->removeItem(choosedArrowhead->edge->arrowheadToDest);
        scene->removeItem(choosedArrowhead->edge->arrowheadToSource);
        foreach(Edge * tmp, choosedArrowhead->edge->sourceNode()->edgeList)
        {
            if(choosedArrowhead->edge == tmp)
                choosedArrowhead->edge->sourceNode()->edgeList.removeOne(tmp);
        }
        foreach(Edge * tmp, choosedArrowhead->edge->destNode()->edgeList)
        {
            if(choosedArrowhead->edge == tmp)
                choosedArrowhead->edge->destNode()->edgeList.removeOne(tmp);
        }
        scene->removeItem(choosedArrowhead->edge);
    }
}

void MainWindow::connectNodes()
{
    choosedNode->isChoosed = true;
    if(!firstConnectingNode)
    {
        firstConnectingNode = choosedNode;
        return;
    }
    else
    {
        foreach(Edge * item, firstConnectingNode->edges())
        {
            if((item->destNode() == choosedNode))
            {
                item->arrowToDest = true;
                firstConnectingNode->isChoosed = false;
                choosedNode->isChoosed = false;
                firstConnectingNode->update();
                firstConnectingNode = nullptr;
                return;
            }
            else if(item->sourceNode() == choosedNode)
            {
                item->arrowToSource = true;
                firstConnectingNode->isChoosed = false;
                choosedNode->isChoosed = false;
                firstConnectingNode->update();
                firstConnectingNode = nullptr;
                return;
            }
        }
        scene->addItem(new Edge(firstConnectingNode, choosedNode, false, true));
        firstConnectingNode->isChoosed = false;
        choosedNode->isChoosed = false;
        firstConnectingNode->update();
        firstConnectingNode = nullptr;
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
//    case Qt::Key_Up:
//        centerNode->moveBy(0, -20);
//        break;
//    case Qt::Key_Down:
//        centerNode->moveBy(0, 20);
//        break;
//    case Qt::Key_Left:
//        centerNode->moveBy(-20, 0);
//        break;
//    case Qt::Key_Right:
//        centerNode->moveBy(20, 0);
//        break;
    case Qt::Key_Plus:
        zoomIn();
        break;
    case Qt::Key_Minus:
        zoomOut();
        break;
    case Qt::Key_Space:
    case Qt::Key_Enter:
        shuffle();
        break;
    default:
        QMainWindow::keyPressEvent(event);
    }
}

void MainWindow::removeNode()
{
    while(!choosedNode->edgeList.isEmpty())
    {
        Edge * tmp = choosedNode->edgeList.front();
        scene->removeItem(tmp);
        if(choosedNode == tmp->sourceNode())
        {
            foreach(Edge * item, tmp->destNode()->edgeList)
                if(item == tmp)
                {
                    tmp->destNode()->edgeList.removeOne(item);

                }
        }
        else
        {
            foreach(Edge * item, tmp->sourceNode()->edgeList)
                if(item == tmp)
                {
                    tmp->sourceNode()->edgeList.removeOne(item);
                }
        }
        scene->removeItem(tmp->arrowheadToDest);
        scene->removeItem(tmp->arrowheadToSource);
        choosedNode->edgeList.pop_front();
    }
    scene->removeItem(choosedNode);
    //delete choosedNode;
    for(int i = 0; i<nodes.size(); i++)
        if(nodes[i] == choosedNode)
            nodes.erase(nodes.begin()+i);
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
    timerId++;

    foreach (Node *node, nodes)
    {
        node->calculateForces();

    }

    bool itemsMoved = false;
    foreach (Node *node, nodes) {
        if (node->advance())
            itemsMoved = true;
    }

    if (timerId == 100000) {
        timerId = 0;
    }
    //scene->update();
    if((timerId == 1000) && gravityLimited)
        gravity = false;

    if(isAuto && (timerId%speedOfAuto == 0))
    {
        on_prevStepButton_clicked();
    }
}

/*#if QT_CONFIG(wheelevent)
void MainWindow::wheelEvent(QWheelEvent *event)
{
    scaleView(pow((double)2, -event->delta() / 240.0));
}
#endif*/

void MainWindow::drawBackground(QPainter *painter, const QRectF &rect)
{
    Q_UNUSED(rect);

    // Shadow
    QRectF sceneRect = ui->graphicsView->scene()->sceneRect();
    QRectF rightShadow(sceneRect.right(), sceneRect.top() + 5, 5, sceneRect.height());
    QRectF bottomShadow(sceneRect.left() + 5, sceneRect.bottom(), sceneRect.width(), 5);
    if (rightShadow.intersects(rect) || rightShadow.contains(rect))
        painter->fillRect(rightShadow, Qt::darkGray);
    if (bottomShadow.intersects(rect) || bottomShadow.contains(rect))
        painter->fillRect(bottomShadow, Qt::darkGray);

    // Fill
    QLinearGradient gradient(sceneRect.topLeft(), sceneRect.bottomRight());
    gradient.setColorAt(0, Qt::white);
    gradient.setColorAt(1, Qt::lightGray);
    painter->fillRect(rect.intersected(sceneRect), gradient);
    painter->setBrush(Qt::NoBrush);
    painter->drawRect(sceneRect);

    // Text
    QRectF textRect(sceneRect.left() + 4, sceneRect.top() + 4,
                    sceneRect.width() - 4, sceneRect.height() - 4);
    QString message(tr("Click and drag the nodes around, and zoom with the mouse "
                       "wheel or the '+' and '-' keys"));

    QFont font = painter->font();
    font.setBold(true);
    font.setPointSize(14);
    painter->setFont(font);
    painter->setPen(Qt::lightGray);
    painter->drawText(textRect.translated(2, 2), message);
    painter->setPen(Qt::black);
    painter->drawText(textRect, message);
}

void MainWindow::scaleView(qreal scaleFactor)
{
    qreal factor = ui->graphicsView->transform().scale(scaleFactor, scaleFactor).mapRect(QRectF(0, 0, 1, 1)).width();
    if (factor < 0.07 || factor > 100)
        return;

    ui->graphicsView->scale(scaleFactor, scaleFactor);
}

void MainWindow::changeWeightOfEdge()
{
    RenameDialog renameWindow("Change weight");
    renameWindow.move(QCursor::pos()-QPoint(100,40));
    renameWindow.exec();
    //choosedNode->text = renameWindow.newName;
    choosedArrowhead->edge->weight=renameWindow.newName.toInt();
}

void MainWindow::createTheoryWindow()
{
    HelpBrowser * brows = new HelpBrowser(":/help","help.htm");
    brows->show();
}

void MainWindow::exitSlot()
{
    QMessageBox msgBox;
    msgBox.setText("Выход");
    msgBox.setWindowTitle("Подтверждение");
    msgBox.setInformativeText("Вы уверены?\nВсе несохранённые данные будут утеряны!");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No );
    msgBox.setIcon(QMessageBox::Warning);
    msgBox.setDefaultButton(QMessageBox::No);
    msgBox.setButtonText(QMessageBox::Yes, "Да");
    msgBox.setButtonText(QMessageBox::No, "Нет");
    msgBox.setWindowIcon(QIcon(":/images/pictures/graph_ico.ico"));
    int res = msgBox.exec();

    if (res == QMessageBox::Yes)
        this->close();

}

void MainWindow::createAboutMeWindow()
{
    AboutWindow * aboutMe = new AboutWindow();
    aboutMe->show();
}

void MainWindow::shuffle()
{
    foreach (QGraphicsItem *item, ui->graphicsView->scene()->items()) {
        if (qgraphicsitem_cast<Node *>(item))
            item->setPos(-150, -150);
    }
}

void MainWindow::zoomIn()
{
    scaleView(qreal(1.2));
}

void MainWindow::zoomOut()
{
    scaleView(1 / qreal(1.2));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openButton_clicked()
{
    QString gphFile = QFileDialog::getOpenFileName(this, tr("Open Graph"),
                      QCoreApplication::applicationDirPath(), tr("Graph Files (*.gph)"));
    std::ifstream finput(gphFile.toStdString());
    gphFile = "";
    char buf = finput.get();
    while(buf != EOF)
    {
        gphFile.append(QChar(buf));
        buf = finput.get();
    }

    if(gphFile.isEmpty())
        return;

    ui->graphInput->setText(gphFile);
    finput.close();
    createGraph();
}

void MainWindow::on_saveButton_clicked()
{
    QString gphFile = QFileDialog::getSaveFileName(this, tr("Save Graph"), QCoreApplication::applicationDirPath(), tr("Graph Files (*.gph)"));
    std::ofstream fout(gphFile.toStdString());
    foreach(Node * node, nodes)
    {
        gphFile="";
        gphFile+=node->text;
        gphFile+=" :";
        foreach(Edge * edge, node->edgeList)
        {
            if((node == edge->sourceNode()) && edge->arrowToDest)
            {
                gphFile+=" " + edge->destNode()->text;
                gphFile+=QString::number(edge->weight);
            }
            if((node == edge->destNode()) && edge->arrowToSource)
            {
                gphFile+=" " + edge->sourceNode()->text;
                gphFile+=QString::number(edge->weight);
            }
        }
        fout << gphFile.toStdString() << std::endl;
    }
    fout.close();
}

void MainWindow::createGraph()
{
    if(!checkInputString())
        return;

    on_clearButton_clicked();
    int posCounter = 0;
    QString graph = ui->graphInput->toPlainText();
    QStringList strList = graph.split('\n');
    for(size_t i = 0; i<strList.size(); i++)
    {

        graph = strList[i];
        deleteSpaces(graph);

        if(graph[1] != ':')
            continue;
        Node * nodeForLink = findNode(QString(graph[0]), nodes);
        if(!nodeForLink)
        {
            if(graph[0].isLetter())
            {
                posCounter+=10;
                nodeForLink = new Node(this, QString(graph[0]));
                nodeForLink->setPos(posCounter-5,posCounter+5);

                nodes.push_back(nodeForLink);
                scene->addItem(nodeForLink);
            }
            else continue;
        }

        for(size_t j = 2; j<graph.size(); j++)
        {
            if(!graph[j].isLetter())
                continue;
            QString weight = "";
            int f = j;
            while(graph[++f].isNumber())
            {
                weight+=graph[f];
            }
            Node * secondNodeForLink = findNode(QString(graph[j]), nodes);

            if(secondNodeForLink == nodeForLink)
                continue;

            if(!secondNodeForLink)
            {
                posCounter+=10;
                secondNodeForLink = new Node(this, QString(graph[j]));
                secondNodeForLink->setPos(posCounter-5,posCounter+5);
                nodes.push_back(secondNodeForLink);
                scene->addItem(secondNodeForLink);
                Edge * tmp = new Edge(nodeForLink, secondNodeForLink, false, true);
                tmp->weight = weight.toInt();
                scene->addItem(tmp);
            }
            else
                tryConnectNodes(nodeForLink,secondNodeForLink, weight);
        }
    }
    gravity = true;
    timerId = 0;
}

void MainWindow::deleteSpaces(QString &string)
{
    for(size_t i = 0; i<string.size(); i++)
    {
        if(string[i] == ' ')
            string.remove(i,1);
    }
}

Node *MainWindow::findNode(QString name, std::vector<Node *> list)
{
    for(size_t i = 0; i<list.size();i++)
    {
        if(list[i]->text == name)
            return list[i];
    }
    return nullptr;
}

bool MainWindow::tryConnectNodes(Node *source, Node *dest, QString weight)
{
    foreach(Edge * edge, dest->edges())
    {
        if(edge->destNode() == source)
        {
            edge->arrowToSource = true;
            return true;
        }

        if(edge->sourceNode() == source)
            return true;
    }
    Edge * tmp = new Edge(source, dest, false, true);
    tmp->weight = weight.toInt();
    scene->addItem(tmp);
    return false;
}

bool MainWindow::visitComponentOfGraph(Node * currentNode)
{
    if(currentNode->isVisited)
        return true;

    currentNode->isVisited = true;
    foreach(Edge * currEdge, currentNode->edgeList)
    {
        if((currentNode == currEdge->sourceNode()) && (!currEdge->isVisited) && currEdge->arrowToDest)
        {
            currEdge->isVisited = true;
            if(!visitComponentOfGraph(currEdge->destNode()))
                return false;
        }
        if((currentNode == currEdge->destNode()) && (!currEdge->isVisited) && currEdge->arrowToSource)
        {
            currEdge->isVisited = true;
            if(!visitComponentOfGraph(currEdge->sourceNode()))
                return false;
        }
    }
    return true;
}

bool MainWindow::checkInputString()
{
    QString graph = ui->graphInput->toPlainText();
    QStringList strList = graph.split('\n');
    for(size_t i = 0; i<strList.size(); i++)
    {
        graph = strList[i];
        deleteSpaces(graph);
        if(graph[0] == '\n' || graph[1] == '\n' || graph.isEmpty())
            continue;

        if(graph[1] != ':')
        {
            QString info = "Отсутствует символ ':' в строке №";
            info+=QString::number(i+1);
            QMessageBox::warning(this, "Внимание",info);
            return false;
        }

        if(!graph[0].isLetter())
        {
            QString info = "Первый символ в строке №";
            info+=QString::number(i+1);
            info+=" не является буквой.\n(точки могут быть названы только ими)";
            QMessageBox::warning(this, "Внимание",info);
            return false;
        }

        for(size_t j = 2; j<graph.size(); j++)
        {
            if(!graph[j].isLetter())
            {
                QString info = "Символ '";
                info+=graph[j];
                info+="' в строке №";
                info+=QString::number(i+1);
                info+=" не является буквой.\n(точки могут быть названы только ими)";
                QMessageBox::warning(this, "Внимание",info);
                return false;
            }
            while(graph[++j].isNumber()) {}
            j--;
        }
    }
    return true;
}

bool MainWindow::checkEulerGraph()
{
    if(!nodes.size())
        return 0;

    for(size_t i = 0; i<nodes.size(); i++)
    {
        if(nodes[i]->edgeList.size()>0)
        {
            visitComponentOfGraph(nodes[i]);
            break;
        }
    }
    bool allIsOk = true;

    for(size_t i = 0; i<nodes.size(); i++)
    {
        if(!nodes[i]->isVisited)
            allIsOk = false;
    }


    for(size_t i = 0; i<nodes.size(); i++)
    {
        int inputCounter = 0;
        int outputCounter = 0;
        int universalCounter = 0;
        nodes[i]->isVisited = false;
        foreach(Edge * currEdge, nodes[i]->edgeList)
        {
            currEdge->isVisited = false;
            if((currEdge->sourceNode() == nodes[i]))
            {
                if(currEdge->arrowToDest && currEdge->arrowToSource)
                    universalCounter++;
                else if(currEdge->arrowToDest)
                    outputCounter++;
                else if(currEdge->arrowToSource)
                    inputCounter++;
            }
            else
            {
                if(currEdge->arrowToDest && currEdge->arrowToSource)
                    universalCounter++;
                else if(currEdge->arrowToDest)
                    inputCounter++;
                else if(currEdge->arrowToSource)
                    outputCounter++;
            }
        }

        universalCounter%=2;
        if(outputCounter < inputCounter)
            outputCounter+=universalCounter;
        else
            inputCounter+=universalCounter;


        if(outputCounter != inputCounter)
            allIsOk = false;
    }

    return allIsOk;
}

void MainWindow::resetEulerGraphFinder()
{
    ui->horizontalSlider->hide();
    ui->nextStepButton->hide();
    ui->prevStepButton->hide();
    ui->pushButton_2->hide();
    foreach(Node * tmp, listOfMoves)
    {
        foreach(Edge * buf, tmp->edgeList)
        {
            buf->isVisited = false;
        }
        tmp->isVisited = false;
    }
    isAuto = false;
    currentMove = 0;
    ui->label->clear();
    listOfMoves.clear();
}

bool MainWindow::findEulerCycle()
{
    resetEulerGraphFinder();
    resetFordFalkersonAlgo();
    stack.clear();
    listOfMoves.clear();
    QString buf = "";
    int i = 0;
    if(!nodes.empty())
        stack.push(nodes[0]);
    while(!stack.isEmpty())
    {
        Node * tmp = stack.top();
        foreach(Edge * currEdge, stack.top()->edgeList)
        {
            if(!currEdge->isVisited)
            {
                if((currEdge->sourceNode() == stack.top()))
                {
                    if(currEdge->arrowToDest && currEdge->arrowToSource)
                    {
                        currEdge->isVisited = true;
                        stack.push(currEdge->destNode());
                        break;
                    }
                    else if(currEdge->arrowToDest)
                    {
                        currEdge->isVisited = true;
                        stack.push(currEdge->destNode());
                        break;
                    }
                }
                else
                {
                    if(currEdge->arrowToDest && currEdge->arrowToSource)
                    {
                        currEdge->isVisited = true;
                        stack.push(currEdge->sourceNode());
                        break;
                    }
                    else if(currEdge->arrowToSource)
                    {
                        currEdge->isVisited = true;
                        stack.push(currEdge->sourceNode());
                        break;
                    }

                }
            }
        }
        if(tmp == stack.top())
        {
            listOfMoves.push_front(stack.top());
            buf+=stack.top()->text;
            buf+="<-";
            stack.pop();
        }
    }
    ui->label->setText(buf);

    for(int i = 0; i<nodes.size(); i++)
    {
        nodes[i]->isVisited = false;
        foreach(Edge * edge, nodes[i]->edgeList)
        {
            edge->isVisited = false;
        }
    }
}


void MainWindow::on_clearButton_clicked()
{
    scene->clear();
    nodes.clear();
    ui->nextStepButton->setDisabled(true);
    resetEulerGraphFinder();
    resetFordFalkersonAlgo();
    isFordFalkerson = false;

}

void MainWindow::on_prevStepButton_clicked()
{
    if(isFordFalkerson)
        nextStep_FordFalkerson();
    else
    {
        if(!ui->prevStepButton->isEnabled() || !ui->prevStepButton->isVisible())
            return;
        foreach(Edge * edge, listOfMoves[currentMove]->edgeList)
        {

            if((listOfMoves[currentMove+1] == edge->sourceNode()) ||
                    (listOfMoves[currentMove+1] == edge->destNode()))
            {
                edge->isVisited = true;
            }
        }
        currentMove++;
        if(currentMove+1 == listOfMoves.size())
        {
            ui->prevStepButton->setDisabled(true);
        }
        if(currentMove)
        {
            ui->nextStepButton->setDisabled(false);
        }
    }
}

void MainWindow::on_nextStepButton_clicked()
{

    if(isFordFalkerson)
        prevStep_FordFalkerson();
    else
    {

        if(!ui->nextStepButton->isEnabled())
            return;

        foreach(Edge * edge, listOfMoves[currentMove]->edgeList)
        {
            if((listOfMoves[currentMove-1] == edge->sourceNode()) ||
                    (listOfMoves[currentMove-1] == edge->destNode()))
            {
                edge->isVisited = false;
            }
        }
        currentMove--;
        if(currentMove == 0)
        {
            ui->nextStepButton->setDisabled(true);
        }
        if(currentMove+1 != listOfMoves.size())
        {
            ui->prevStepButton->setEnabled(true);
        }
    }
}

void MainWindow::on_commandLinkButton_clicked()
{
    if(checkEulerGraph())
    {
        resetEulerGraphFinder();
        findEulerCycle();
        ui->prevStepButton->setVisible(true);
        ui->nextStepButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->horizontalSlider->setVisible(true);
    }
    else
        QMessageBox::information(this, "Внимание","Цикл эйлера не может быть построен для этого графа!\n(См. теорию в меню программы)");
}

void MainWindow::on_pushButton_2_clicked()
{
    if(isAuto)
    {
        ui->pushButton_2->setChecked(false);
        isAuto = false;
    }
    else
    {
        ui->pushButton_2->setChecked(true);
        isAuto = true;
    }
}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    speedOfAuto = position;
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    gravity = checked;
    gravityLimited = !checked;
}

void MainWindow::on_pushButton_clicked()
{
    createGraph();
}

bool MainWindow::findPath(QList <Node*> & path, QList <Edge*> & way, Node * current, Node * destination)
{
    current->isVisited = true;

    QList <Edge*> usedPaths;

    do
    {
        Node * nextNode = nullptr;
        Edge * wayToNextNode = nullptr;
        foreach(Edge * currEdge, current->edgeList)
        {
            bool next = false;
            foreach(Edge * checkPath, usedPaths)
            {
                if(checkPath == currEdge)
                    next = true;

            }

            if(next)
                continue;

            if(currEdge->current_flow >= currEdge->weight)
                continue;

            if((currEdge->sourceNode() == current))
            {
                if(currEdge->destNode()->isVisited == true)
                    continue;

                if(currEdge->arrowToDest)
                {

                    if(nextNode == nullptr)
                    {
                        nextNode = currEdge->destNode();
                        wayToNextNode = currEdge;
                    }

                    int curr_available_capacity = currEdge->weight-currEdge->current_flow;
                    int next_available_capacity = wayToNextNode->weight-wayToNextNode->current_flow;
                    if(curr_available_capacity > next_available_capacity)
                    {
                        nextNode = currEdge->destNode(); // ЮБИЛЕЙНАЯ СТРОКА - КОСАРЬ, СТАВЬ ЛАЙК И ПОДПИСЫВАЙСЯ, НАЖМИ НА КОЛОКОЛЬЧИК ПЕРЕДАЮ ПРИВЕТ РОДИТЕЛЯМ, НЕОБХОДИМО ВЫЗВАТЬ ПСИХИАТРА, ЗАЧЕМ ТЫ ПРОДОЛЖАЕШЬ ЭТО ЧИТАТЬ? ТУТ УЖЕ НИЧЕГО НЕТ, ХВАТИТ, ВСЁ, КОНЕЦ.                                  ЭТО КОНЕЦ                               ????? Втф, окей, это пасхалка, ты доволен? Ты дочитал до пасхалки, гц чувак.                                                                                                                                      Мур мур мур чик чирик кар, собачка говорит "Му"
                        wayToNextNode = currEdge;
                    }
                }

//                if(currEdge->arrowToSource)
//                {
//                    int curr_available_capacity = currEdge->weight-currEdge->current_flow;
//                    int next_available_capacity = wayToNextNode->weight-wayToNextNode->current_flow;
//                    if(curr_available_capacity < next_available_capacity)
//                    {
//                        nextNode = currEdge->destNode();
//                        wayToNextNode = currEdge;
//                    }
//                }
            }

            if((currEdge->destNode() == current))
            {
                if(currEdge->sourceNode()->isVisited == true)
                    continue;


                if(currEdge->arrowToSource)
                {
                    if(nextNode == nullptr)
                    {
                        nextNode = currEdge->sourceNode();
                        wayToNextNode = currEdge;
                    }

                    int curr_available_capacity = currEdge->weight-currEdge->current_flow;
                    int next_available_capacity = wayToNextNode->weight-wayToNextNode->current_flow;
                    if(curr_available_capacity > next_available_capacity)
                    {
                        nextNode = currEdge->sourceNode(); // ЮБИЛЕЙНАЯ СТРОКА - КОСАРЬ, СТАВЬ ЛАЙК И ПОДПИСЫВАЙСЯ, НАЖМИ НА КОЛОКОЛЬЧИК ПЕРЕДАЮ ПРИВЕТ РОДИТЕЛЯМ, НЕОБХОДИМО ВЫЗВАТЬ ПСИХИАТРА, ЗАЧЕМ ТЫ ПРОДОЛЖАЕШЬ ЭТО ЧИТАТЬ? ТУТ УЖЕ НИЧЕГО НЕТ, ХВАТИТ, ВСЁ, КОНЕЦ.                                  ЭТО КОНЕЦ                               ????? Втф, окей, это пасхалка, ты доволен? Ты дочитал до пасхалки, гц чувак.                                                                                                                                      Мур мур мур чик чирик кар, собачка говорит "Му"
                        wayToNextNode = currEdge;
                    }
                }

//                if(currEdge->arrowToDest)
//                {
//                    int curr_available_capacity = currEdge->weight-currEdge->current_flow;
//                    int next_available_capacity = wayToNextNode->weight-wayToNextNode->current_flow;
//                    if(curr_available_capacity < next_available_capacity)
//                    {
//                        nextNode = currEdge->sourceNode();
//                        wayToNextNode = currEdge;
//                    }
//                }
            }
        }

        if(nextNode)
        {
            if(nextNode == destination)
            {
                path.push_front(nextNode);
                way.push_front(wayToNextNode);
                current->isVisited = false;
                return 1;
            }

            if(findPath(path, way, nextNode, destination))
            {
                path.push_front(nextNode);
                way.push_front(wayToNextNode);
                current->isVisited = false;
                return 1;
            }
        }
        else
            break;

        usedPaths.push_back(wayToNextNode);

    }
    while(true);
    current->isVisited = false;
    return 0;
}




void MainWindow::nextStep_FordFalkerson()
{
    if(!ui->prevStepButton->isEnabled())
        return;



    ui->nextStepButton->setDisabled(false);

    if(currentMove == allPaths[currentPath].size())
    {
        foreach(Node * item, allPaths[currentPath])
        {
            item->isVisited = false;
            item->update();
        }

        foreach(Edge * itemm, allWays[currentPath])
        {
            itemm->isVisited = false;
            itemm->current_flow+=bottleHecks[currentPath];
            itemm->update();
        }

        currentMove = 0;
        currentPath++;

        if(currentPath == allPaths.size())
        {
            ui->prevStepButton->setDisabled(true);
            return;
        }
        return;
    }

    //if(allWays)
    allWays[currentPath][currentMove]->isVisited = true;
    allWays[currentPath][currentMove]->update();

    allPaths[currentPath][currentMove]->isVisited = true;
    allPaths[currentPath][currentMove]->update();

    currentMove++;

}

void MainWindow::prevStep_FordFalkerson()
{
    ui->prevStepButton->setEnabled(true);

    if(currentMove == 0)
    {
        currentPath--;
        foreach(Node * item, allPaths[currentPath])
        {
            item->isVisited = true;
            item->update();
        }

        foreach(Edge * itemm, allWays[currentPath])
        {
            itemm->isVisited = true;
            itemm->current_flow-=bottleHecks[currentPath];
            itemm->update();
        }

        currentMove = allPaths[currentPath].size();
        return;
    }

    currentMove--;
    //if(allWays)
    allWays[currentPath][currentMove]->isVisited = false;
    allWays[currentPath][currentMove]->update();

    allPaths[currentPath][currentMove]->isVisited = false;
    allPaths[currentPath][currentMove]->update();


    if(!currentPath && !currentMove)
        ui->nextStepButton->setDisabled(true);


}

void MainWindow::resetFordFalkersonAlgo()
{
    ui->horizontalSlider->hide();
    ui->nextStepButton->hide();
    ui->prevStepButton->hide();
    ui->pushButton_2->hide();
    isAuto = false;

    for(int i = 0; i<allWays.size(); i++)
    {
        for(int j = 0; j<allWays[i].size(); j++)
        {
            allWays[i][j]->isVisited = false;
            allWays[i][j]->current_flow = 0;
        }
    }

    for(int i = 0; i<allPaths.size(); i++)
    {
        for(int j = 0; j<allPaths[i].size(); j++)
        {
            allPaths[i][j]->isVisited = false;
        }
    }

    allPaths.clear();
    allWays.clear();


    if(algoSource)
    {
        algoSource->isVisited = false;
        algoSource->update();
    }
    Node * tmp = algoDest;
    algoSource = nullptr;
    algoDest = nullptr;
    if(tmp)
        tmp->update();

    bottleHecks.clear();

    isFordFalkerson = false;

    currentMove = 0;
    currentPath = 0;

    ui->label->clear();
    ui->prevStepButton->setEnabled(true);
}

void MainWindow::on_start_ford_falkerson_clicked()
{
    if(!algoDest)
    {
        QMessageBox::information(this, "Внимание","Не назначена точка стока!");
        return;
    }

    if(!algoSource)
    {
        QMessageBox::information(this, "Внимание","Не назначена точка истока!");
        return;
    }


    allPaths.clear();
    allWays.clear();

    Node * tmp1 = algoDest;
    Node * tmp2 = algoSource;

    resetEulerGraphFinder();
    resetFordFalkersonAlgo();

    algoDest = tmp1;
    algoSource = tmp2;

    QList <Node*> path;
    QList <Edge*> way;


    while(findPath(path, way, algoSource, algoDest))
    {
        //path.push_front(algoSource);

        int bottleHeck = INFINITY;

        foreach(Edge * item, way)
        {
            if(item->weight - item->current_flow < bottleHeck)
                bottleHeck = item->weight - item->current_flow;
        }

        foreach(Edge * item, way)
        {
            item->current_flow+=bottleHeck;
        }

        allPaths.push_back(path);
        allWays.push_back(way);
        bottleHecks.push_back(bottleHeck);

        path.clear();
        way.clear();
    }

    resetEulerGraphFinder();

    for(int i = 0; i<allWays.size(); i++)
    {
        for(int j = 0; j<allWays[i].size(); j++)
        {
            allWays[i][j]->current_flow = 0;
        }
    }

    algoSource->isVisited = true;
    algoSource->update();

    int result = 0;

    for(int i = 0; i<bottleHecks.size(); i++)
        result+=bottleHecks[i];

    QString resultStr;
    resultStr += "Максимальный поток из (" + algoSource->text + ") в (" + algoDest->text + ") равен: " + QString::number(result);

    QMessageBox::information(this, "Results Ford Falkerson", resultStr);

    ui->label->setText(resultStr);

    isFordFalkerson = true;

    if(!result)
        ui->prevStepButton->setDisabled(true);
    ui->label->setVisible(true);
    ui->prevStepButton->setVisible(true);
    ui->nextStepButton->setVisible(true);
    ui->pushButton_2->setVisible(true);
    ui->horizontalSlider->setVisible(true);
}
