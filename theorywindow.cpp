#include "theorywindow.h"
#include "ui_theorywindow.h"

TheoryWindow::TheoryWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TheoryWindow)
{
    setWindowIcon(QIcon(":/images/pictures/graph_ico.ico"));
    ui->setupUi(this);
    setWindowTitle("Theory");
    QPixmap pixmap(":/images/pictures/graph.png");
    ui->image->setPixmap(pixmap);
}

TheoryWindow::~TheoryWindow()
{
    delete ui;
}
