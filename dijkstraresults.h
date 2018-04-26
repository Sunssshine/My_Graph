#ifndef DIJKSTRARESULTS_H
#define DIJKSTRARESULTS_H

#include <QWidget>

namespace Ui {
class DijkstraResults;
}

class DijkstraResults : public QWidget
{
    Q_OBJECT

public:
    explicit DijkstraResults(QString & results, QWidget *parent = 0);
    ~DijkstraResults();

private:
    Ui::DijkstraResults *ui;
};

#endif // DIJKSTRARESULTS_H
