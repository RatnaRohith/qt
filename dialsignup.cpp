#include "dialsignup.h"
#include "ui_dialsignup.h"
#include "dialprofile.h"

dialsignup::dialsignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialsignup)
{
    ui->setupUi(this);
}

dialsignup::~dialsignup()
{
    delete ui;
}

void dialsignup::on_pushButton_clicked()
{
    dialprofile sign;
    sign.setModal(true);
    sign.exec();
}
