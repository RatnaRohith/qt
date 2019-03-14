#include "step3idal.h"
#include "ui_step3idal.h"
#include "simdial2.h"

step3idal::step3idal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::step3idal)
{
    ui->setupUi(this);
}

step3idal::~step3idal()
{
    delete ui;
}

void step3idal::on_pushButton_clicked()
{
    simDial2 sign;
    sign.setModal(true);
    sign.exec();
}
