#ifndef SCENARIO_CHECK_H
#define SCENARIO_CHECK_H

#include <QWidget>
#include <QFileDialog>
#include <QProcess>
#include <iostream>

namespace Ui {
class ScenarioCheck;
}

namespace ScenarioCheckParams
{
    struct Params {
        QString checkpoint;
        QString scenario;
        QString output;
        QString error_list;
        double checkpoint_size;
        double right_position_thres;
        double right_short_cut_thres;
        double left_position_thres;
        double left_big_swing_thres;
    };
}


class ScenarioCheck : public QWidget
{
    Q_OBJECT

public:
    explicit ScenarioCheck(QWidget *parent = 0);
    ~ScenarioCheck();
    ScenarioCheckParams::Params current_param;
    ScenarioCheckParams::Params new_param;
    void start();
    void stop();

private slots:
    void on_checkpoint_tool_clicked();

    void on_error_list_tool_clicked();

    void on_scenario_tool_clicked();

    void on_output_tool_clicked();

    void on_checkpoint_size_value_valueChanged(double arg1);

    void on_right_position_thres_value_valueChanged(double arg1);

    void on_right_short_cut_thres_value_valueChanged(double arg1);

    void on_left_position_thres_value_valueChanged(double arg1);

    void on_left_big_swing_thres_value_valueChanged(double arg1);

    void on_ok_clicked();

private:
    Ui::ScenarioCheck *ui;
    QProcess process;

signals:
    void checkpoint_file_selected(QString filename);
    void error_list_file_selected(QString filename);
    void scenario_file_selected(QString filename);
    void output_file_selected(QString filename);

};

#endif // SCENARIO_CHECK_H
