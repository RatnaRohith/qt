#include "simdial2.h"
#include "ui_simdial2.h"

simDial2::simDial2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::simDial2)
{
    ui->setupUi(this);
}

simDial2::~simDial2()
{
    delete ui;
}

void simDial2::on_pushButton_clicked()
{

}
