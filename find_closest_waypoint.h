#ifndef FINDCLOSESTWAYPOINT_H
#define FINDCLOSESTWAYPOINT_H

#include <QWidget>

namespace Ui {
class FindClosestWaypoint;
}

class FindClosestWaypoint : public QWidget
{
    Q_OBJECT

public:
    explicit FindClosestWaypoint(QWidget *parent = 0);
    ~FindClosestWaypoint();

private:
    Ui::FindClosestWaypoint *ui;
};

#endif // FINDCLOSESTWAYPOINT_H
