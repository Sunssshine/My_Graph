#include "dijkstratheory.h"
#include "ui_dijkstratheory.h"

DijkstraTheory::DijkstraTheory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DijkstraTheory)
{
    setWindowIcon(QIcon(":/images/pictures/graph_ico.ico"));
    ui->setupUi(this);
}

DijkstraTheory::~DijkstraTheory()
{
    delete ui;
}
