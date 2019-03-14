#ifndef DIALPROFILE_H
#define DIALPROFILE_H

#include <QDialog>

namespace Ui {
class dialprofile;
}

class dialprofile : public QDialog
{
    Q_OBJECT

public:
    explicit dialprofile(QWidget *parent = 0);
    ~dialprofile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialprofile *ui;
};

#endif // DIALPROFILE_H
