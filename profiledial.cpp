#include "profiledial.h"
#include "ui_profiledial.h"
#include "step3idal.h"
profiledial::profiledial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profiledial)
{
    ui->setupUi(this);
}

profiledial::~profiledial()
{
    delete ui;
}

void profiledial::on_pushButton_clicked()
{
    step3idal sign;
    sign.setModal(true);
    sign.exec();
}
