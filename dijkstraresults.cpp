#include "dijkstraresults.h"
#include "ui_dijkstraresults.h"

DijkstraResults::DijkstraResults(QString & results, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DijkstraResults)
{

    ui->setupUi(this);
    setWindowTitle("Dejkstra algorithm process results");
    setWindowIcon(QIcon(":/images/pictures/graph_ico.ico"));
    ui->textBrowser->setPlainText(results);
}

DijkstraResults::~DijkstraResults()
{
    delete ui;
}
