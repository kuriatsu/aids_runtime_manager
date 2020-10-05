#include "find_closest_waypoint.h"
#include "ui_find_closest_waypoint.h"

FindClosestWaypoint::FindClosestWaypoint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FindClosestWaypoint)
{
    ui->setupUi(this);
}

FindClosestWaypoint::~FindClosestWaypoint()
{
    delete ui;
}

void FindClosestWaypoint::start()
{
    QString program = "roslaunch find_closest_waypoint find_closest_waypoint.launch";
    QStringList args;
    process.start(program, args);
}

void FindClosestWaypoint::stop()
{
    process.terminate();
}

void FindClosestWaypoint::on_search_thres_valueChanged(double arg1)
{
    new_param.search_thres = arg1;
}

void FindClosestWaypoint::on_Ok_Cancel_accepted()
{
    current_param = new_param;
}
