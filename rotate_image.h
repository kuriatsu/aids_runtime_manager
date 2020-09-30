#ifndef ROTATEIMAGE_H
#define ROTATEIMAGE_H

#include <QWidget>

namespace Ui {
class RotateImage;
}

class RotateImage : public QWidget
{
    Q_OBJECT

public:
    explicit RotateImage(QWidget *parent = 0);
    ~RotateImage();

private:
    Ui::RotateImage *ui;
};

#endif // ROTATEIMAGE_H
