#include "myaction.h"

MyAction::MyAction(QString string, Node * item)
{
    setObjectName(string);
    this->node = item;
}

//void MyAction::triggered(Node *node)
//{

//}
