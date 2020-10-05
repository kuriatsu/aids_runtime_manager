#ifndef ROTATEIMAGE_H
#define ROTATEIMAGE_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class RotateImage;
}

class RotateImage : public QWidget
{
    Q_OBJECT

public:
    explicit RotateImage(QWidget *parent = 0);
    ~RotateImage();

    void start();
    void stop();

private Q_SLOTS:
    void on_add_clicked();

    void on_remove_clicked();

private:
    Ui::RotateImage *ui;
    QProcess process;
    int row_count;
    int column_count;
};

#endif // ROTATEIMAGE_H
