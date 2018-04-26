#ifndef DIJKSTRATHEORY_H
#define DIJKSTRATHEORY_H

#include <QWidget>

namespace Ui {
class DijkstraTheory;
}

class DijkstraTheory : public QWidget
{
    Q_OBJECT

public:
    explicit DijkstraTheory(QWidget *parent = 0);
    ~DijkstraTheory();

private:
    Ui::DijkstraTheory *ui;
};

#endif // DIJKSTRATHEORY_H
