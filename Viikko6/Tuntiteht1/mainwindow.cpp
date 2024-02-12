#include "mainwindow.h"
#include "form2.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btnNextPage->setDisabled(true); //Napin btnNextPage painaminen estetty
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnTest_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug() << "Painiketta painettu";
    ui->labelTest->setText("Painiketta painettu: "+s+" kertaa");

}


void MainWindow::on_btnTallenna_clicked()
{
    etunimi=ui->textEtunimi->text();
    sukunimi=ui->textSukunimi->text();
    ui->labelMessage->setText("Terve " +etunimi+" "+sukunimi+ "!");
    ui->btnNextPage->setDisabled(false); //Nappia btnNextPage voi jälleen painaa.
}

void MainWindow::on_btnNextPage_clicked()
{
    Form2 *objectForm2 = new Form2(this);
    objectForm2->setEtunimi(etunimi);
    objectForm2->setSukunimi(sukunimi);

    //Eri tapoja avata uusi ikkuna:
    //objectForm2->open(); //Avaa Form2-ikkunan. Kun ikkunan sulkee, Mainwindow-ikkunaan voi taas kirjoittaa.
    //objectForm2->exec(); //Avaa Form2-ikkunan. Kun ikkunan sulkee, Mainwindow-ikkunaan voi taas kirjoittaa.
    objectForm2->show(); // Avaa Form2-ikkunan ja Mainwindow-ikkunaan voi samaan aikaan kirjoittaa. Tällä voi avata useamman samanlaisen ikkunan.
}
