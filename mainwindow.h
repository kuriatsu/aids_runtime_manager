#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "scenario_check.h"

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

private:
    Ui::MainWindow *ui;
    ScenarioCheck scenario_check;

};

#endif // MAINWINDOW_H
