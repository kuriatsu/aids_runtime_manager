#include "rotate_image.h"
#include "ui_rotate_image.h"

RotateImage::RotateImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RotateImage)
{
    ui->setupUi(this);
}

RotateImage::~RotateImage()
{
    delete ui;
}
