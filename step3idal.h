#ifndef STEP3IDAL_H
#define STEP3IDAL_H

#include <QDialog>

namespace Ui {
class step3idal;
}

class step3idal : public QDialog
{
    Q_OBJECT

public:
    explicit step3idal(QWidget *parent = 0);
    ~step3idal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::step3idal *ui;
};

#endif // STEP3IDAL_H
