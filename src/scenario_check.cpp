#include "scenario_check.h"
#include "ui_scenario_check.h"

ScenarioCheck::ScenarioCheck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScenarioCheck)
{
    ui->setupUi(this);
}

ScenarioCheck::~ScenarioCheck()
{
    delete ui;
}

void ScenarioCheck::start()
{
    // QString program = "subl";
    QString program = "gnome-terminal; source /opt/ros/melodic/setup.bash; source ~/aids/ros/devel/setup.bash; roslaunch scenario_check scenario_check.launch";
    QStringList args;
    // args << "check_point" << current_param.checkpoint << "scenario" << current_param.scenario << "output" << current_param.output << "error_list" << current_param.error_list ;
    process.start(program, args);
}

void ScenarioCheck::stop()
{
    std::cout << process.program().toStdString() << std::endl;
    process.terminate();
}

void ScenarioCheck::on_checkpoint_tool_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, tr("checkpoint file path"), "./", tr("csv file (*.csv)"));
    Q_EMIT checkpoint_file_selected(filename);
    new_param.checkpoint = filename;
}

void ScenarioCheck::on_error_list_tool_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, tr("error list file path"), "./", tr("csv file (*.csv)"));
    Q_EMIT error_list_file_selected(filename);
    new_param.error_list = filename;
}

void ScenarioCheck::on_scenario_tool_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, tr("scenario file path"), "./", tr("csv file (*.csv)"));
    Q_EMIT scenario_file_selected(filename);
    new_param.scenario = filename;
}

void ScenarioCheck::on_output_tool_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, tr("output file path"), "./", tr("csv file (*.csv)"));
    Q_EMIT output_file_selected(filename);
    new_param.output = filename;
}

void ScenarioCheck::on_checkpoint_size_value_valueChanged(double arg1)
{
    new_param.checkpoint_size = arg1;
}

void ScenarioCheck::on_right_position_thres_value_valueChanged(double arg1)
{
    new_param.right_position_thres = arg1;
}


void ScenarioCheck::on_right_short_cut_thres_value_valueChanged(double arg1)
{
    new_param.right_short_cut_thres = arg1;
}

void ScenarioCheck::on_left_position_thres_value_valueChanged(double arg1)
{
    new_param.left_position_thres = arg1;
}

void ScenarioCheck::on_left_big_swing_thres_value_valueChanged(double arg1)
{
    new_param.left_big_swing_thres = arg1;
}

void ScenarioCheck::on_ok_clicked()
{
    current_param = new_param;
    this->close();
}
