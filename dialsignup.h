#ifndef DIALSIGNUP_H
#define DIALSIGNUP_H

#include <QDialog>

namespace Ui {
class dialsignup;
}

class dialsignup : public QDialog
{
    Q_OBJECT

public:
    explicit dialsignup(QWidget *parent = 0);
    ~dialsignup();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialsignup *ui;
};

#endif // DIALSIGNUP_H
