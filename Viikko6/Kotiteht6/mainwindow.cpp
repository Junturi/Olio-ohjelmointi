#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Ohjelman alkaessa asetetaan state arvoon 1
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Tallentaa painetun napin nimen ja irrottaa siitä viimeisen merkin = napin numeroarvo
//Jos state on 1, tallennetaan muuttujaan number1 ja näytetään luku näytössä lineNum1
//Jos state on 2, tallennetaan vastaavasti number2 ja näyttö lineNum2
void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;

    if (state == 1){
    number1 = number1 + name.last(1);
    ui->lineNum1->setText(number1);
    }

    if (state == 2){
    number2 = number2 + name.last(1);
    ui->lineNum2->setText(number2);
    }
}

//Tallentaa painetun napin nimen ja määrittää sen perusteella operand-muuttujan arvon
//Asettaa staten arvoon 2
void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    state = 2;

    if (name == "btnAdd"){
    operand = 0;
    }
    else if (name == "btnSub"){
    operand = 1;
    }
    else if (name == "btnMul"){
    operand = 2;
    }
    else if (name == "btnDiv"){
    operand = 3;
    }
}

//Kun Enter-nappia painetaan, tarkistetaan operandin arvo ja suoritetaan tarvittava laskutoimitus
//Tämän jälkeen näytetään arvo näytöllä lineResult
//Kun Clear-nappia painetaan, kutsutaan funktiota resetLineEdits
void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;

    if (name == "btnEnter"){

    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    qDebug() << "number 1 = " << n1 << "and number 2 = " << n2 << Qt::endl;

        switch(operand){
        case 0:
            result = n1+n2;
            break;
        case 1:
            result = n1-n2;
            break;
        case 2:
            result = n1*n2;
            break;
        case 3:
            result = n1/n2;
            break;
        }
        qDebug() << result;

    ui->lineResult->setText(QString::number(result));
    }
    else{
        resetLineEdits();
    }
}

//Nollataan laskin, eli tyhjennetään näytöt, nollataan muuttujat ja asetetaan state = 1
void MainWindow::resetLineEdits()
{
    number1 = "";
    number2 = "";
    ui->lineNum1->setText(0);
    ui->lineNum2->setText(0);
    ui->lineResult->setText(0);
    state = 1;
}

//Yksittäisten nappien käsittelijät
//Numeronapit kutsuvat funktiota numberClickedHandler
//Napit +-*/ kutsuvat funktiota addSubMulDivClickHandler
//Enter ja Clear kutsuvat funktiota clearAndEnterClickedHandler

void MainWindow::on_btnN1_clicked()
{
    numberClickedHandler();

}


void MainWindow::on_btnN2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnN0_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_btnClear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_btnEnter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_btnAdd_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnSub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnMul_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnDiv_clicked()
{
    addSubMulDivClickHandler();
}


