#ifndef MYACTION_H
#define MYACTION_H
#include <QMenu>
#include <QString>

class Node;


class MyAction : public QAction
{
    //Q_OBJECT
public:
    MyAction(QString string, Node *item);
    Node * node;
//signals:
    //void triggered(Node * node);
};

#endif // MYACTION_H
