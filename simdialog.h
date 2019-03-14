#ifndef SIMDIALOG_H
#define SIMDIALOG_H

#include <QDialog>

namespace Ui {
class simDialog;
}

class simDialog : public QDialog
{
    Q_OBJECT

public:
    explicit simDialog(QWidget *parent = 0);
    ~simDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::simDialog *ui;
};

#endif // SIMDIALOG_H
