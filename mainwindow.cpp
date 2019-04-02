#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->label->clear();
}


void MainWindow::on_pushButton_clicked()
{
    ui->spinBox->setRange(1,10);
    ui->spinBox_2->setRange(1,10);
    ui->spinBox_3->setRange(1,10);
    ui->spinBox_4->setRange(1,10);
    int L1 = ui->spinBox->value();
    int L2 = ui->spinBox_2->value();
    int L3 = ui->spinBox_3->value();
    double S = (L1 + L2 + L3) / 3;
    int E = ui->spinBox_4->value();
    double R = S * 0.4 + E * 0.6;
    ui->label->setNum(R);
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    ui->label->clear();
}

void MainWindow::on_spinBox_3_valueChanged(const QString &arg1)
{
    ui->label->clear();
}

void MainWindow::on_spinBox_4_valueChanged(const QString &arg1)
{
    ui->label->clear();
}
