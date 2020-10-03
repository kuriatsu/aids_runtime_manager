#ifndef FINDCLOSESTWAYPOINT_H
#define FINDCLOSESTWAYPOINT_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class FindClosestWaypoint;
}

namespace FindClosestWaypointParams
{
    struct Params {
        double search_thres;
    };
}

class FindClosestWaypoint : public QWidget
{
    Q_OBJECT

public:
    explicit FindClosestWaypoint(QWidget *parent = 0);
    ~FindClosestWaypoint();

    void start();
    void stop();
    FindClosestWaypointParams::Params current_param;
    FindClosestWaypointParams::Params new_param;

private slots:
    void on_search_thres_valueChanged(double arg1);


    void on_Ok_Cancel_accepted();

private:
    Ui::FindClosestWaypoint *ui;
    QProcess process;
};

#endif // FINDCLOSESTWAYPOINT_H
