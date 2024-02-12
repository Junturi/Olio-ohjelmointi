#include "form2.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    qDebug() << "Form2 olio tuhottu";
    delete ui;
}

void Form2::setEtunimi(QString en)
{
    ui->labelEtunimi->setText(en);
}

void Form2::setSukunimi(QString sn)
{
    ui->labelSukunimi->setText(sn);

}
