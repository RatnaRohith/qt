#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialsignup.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    dialsignup sign;
    sign.setModal(true);
    sign.exec();
}

void MainWindow::on_pushButton_2_clicked()
{

}
