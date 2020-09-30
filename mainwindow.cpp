#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_scenario_check_tool_clicked()
{
    scenario_check.show();
}

void MainWindow::on_scenario_check_run_clicked(bool checked)
{
    ui->scenario_check_run->setChecked(checked);
    if (checked)
    {
        scenario_check.start();
    }
    else
    {
        scenario_check.stop();
    }
}

void MainWindow::on_rotate_image_tool_clicked()
{
    rotate_image.show();
}

void MainWindow::on_totate_image_run_clicked(bool checked)
{
    ui->totate_image_run->setChecked(checked);
    if (checked)
    {
        rotate_image.start();
    }
    else
    {
        rotate_image.stop();
    }
}

void MainWindow::on_find_closest_waypoint_tool_clicked()
{
    find_closest_waypoint.show();
}

void MainWindow::on_find_closest_waypoint_run_clicked(bool checked)
{
    ui->find_closest_waypoint_run->setChecked(checked);
    if (checked)
    {
        find_closest_waypoint.start();
    }
    else
    {
        find_closest_waypoint.stop();
    }
}
