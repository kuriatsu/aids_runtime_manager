#include "rotate_image.h"
#include "ui_rotate_image.h"
#include "iostream"
RotateImage::RotateImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RotateImage)
{
    ui->setupUi(this);
    row_count = 1;
    column_count = 1;
}

RotateImage::~RotateImage()
{
    delete ui;
}

void RotateImage::start()
{
    QString program = "roslaunch rotate_image rotate_image.launch";
    QStringList args;
    process.start(program, args);
}

void RotateImage::stop()
{
    process.terminate();
}

void RotateImage::on_add_clicked()
{
    row_count++;

    QLineEdit *input_topic = new QLineEdit;
    QLineEdit *output_topic = new QLineEdit;
    QDoubleSpinBox *rotate_value = new QDoubleSpinBox;
    rotate_value->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    rotate_value->setMaximumWidth(50);

    ui->gridLayout->addWidget(input_topic, row_count, 0);
    ui->gridLayout->addWidget(output_topic, row_count, 1);
    ui->gridLayout->addWidget(rotate_value, row_count, 2);
}

void RotateImage::on_remove_clicked()
{
    if (row_count < 2)
    {
        return;
    }

    for (int i = 0; i < 3; ++i)
    {
        ui->gridLayout->itemAtPosition(row_count, i)->widget()->hide();
        ui->gridLayout->removeWidget( ui->gridLayout->itemAtPosition(row_count, i)->widget());
        ui->gridLayout->removeItem(ui->gridLayout->itemAtPosition(row_count, i));
    }

    row_count--;
}
