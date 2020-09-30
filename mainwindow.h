#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "scenario_check.h"
#include "rotate_image.h"
#include "find_closest_waypoint.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_scenario_check_tool_clicked();
    void on_scenario_check_run_clicked(bool checked);

    void on_rotate_image_tool_clicked();

    void on_find_closest_waypoint_tool_clicked();

    void on_totate_image_run_clicked(bool checked);

    void on_find_closest_waypoint_run_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    ScenarioCheck scenario_check;
    RotateImage rotate_image;
    FindClosestWaypoint find_closest_waypoint;

};

#endif // MAINWINDOW_H
