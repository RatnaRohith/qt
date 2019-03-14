#ifndef DIALSIGNIN_H
#define DIALSIGNIN_H

#include <QDialog>

namespace Ui {
class Dialsignin;
}

class Dialsignin : public QDialog
{
    Q_OBJECT

public:
    explicit Dialsignin(QWidget *parent = 0);
    ~Dialsignin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialsignin *ui;
};

#endif // DIALSIGNIN_H
