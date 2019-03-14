#ifndef PROFILEDIAL_H
#define PROFILEDIAL_H

#include <QDialog>

namespace Ui {
class profiledial;
}

class profiledial : public QDialog
{
    Q_OBJECT

public:
    explicit profiledial(QWidget *parent = 0);
    ~profiledial();

private slots:
    void on_pushButton_clicked();

private:
    Ui::profiledial *ui;
};

#endif // PROFILEDIAL_H
