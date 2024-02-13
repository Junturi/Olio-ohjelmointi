#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCount_clicked()
{
    qDebug() << "Clicked button Count";
    x++;
    QString s = QString::number(x);
    ui->lineCounter->setText(s);
}


void MainWindow::on_btnReset_clicked()
{
    qDebug() << "Clicked button Reset";
    x = 0;
    QString s = QString::number(x);
    ui->lineCounter->setText(s);
}

