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
