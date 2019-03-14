#include "simdialog.h"
#include "ui_simdialog.h"
#include "profiledial.h"

simDialog::simDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::simDialog)
{
    ui->setupUi(this);
}

simDialog::~simDialog()
{
    delete ui;
}

void simDialog::on_pushButton_clicked()
{
    profiledial sign;
    sign.setModal(true);
    sign.exec();
}
