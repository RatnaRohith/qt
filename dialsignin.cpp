#include "dialsignin.h"
#include "ui_dialsignin.h"
#include "dialprofile.h"
#include "mainwindow.h"

Dialsignin::Dialsignin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialsignin)
{
    ui->setupUi(this);
}

Dialsignin::~Dialsignin()
{
    delete ui;
}

void Dialsignin::on_pushButton_clicked()
{

}

void Dialsignin::on_pushButton_2_clicked()
{

}
