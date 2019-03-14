#ifndef SIMDIAL2_H
#define SIMDIAL2_H

#include <QDialog>

namespace Ui {
class simDial2;
}

class simDial2 : public QDialog
{
    Q_OBJECT

public:
    explicit simDial2(QWidget *parent = 0);
    ~simDial2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::simDial2 *ui;
};

#endif // SIMDIAL2_H
