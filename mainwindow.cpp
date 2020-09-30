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
