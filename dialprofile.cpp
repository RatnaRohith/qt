#include "dialprofile.h"
#include "ui_dialprofile.h"
#include "simdialog.h"

dialprofile::dialprofile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialprofile)
{
    ui->setupUi(this);
}

dialprofile::~dialprofile()
{
    delete ui;
}

void dialprofile::on_pushButton_clicked()
{
    simDialog sign;
    sign.setModal(true);
    sign.exec();
}
