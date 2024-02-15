#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnN1_clicked();
    void on_btnN2_clicked();
    void on_btnN3_clicked();
    void on_btnN4_clicked();
    void on_btnN5_clicked();
    void on_btnN6_clicked();
    void on_btnN7_clicked();
    void on_btnN8_clicked();
    void on_btnN9_clicked();
    void on_btnN0_clicked();
    void on_btnClear_clicked();
    void on_btnEnter_clicked();
    void on_btnAdd_clicked();
    void on_btnSub_clicked();
    void on_btnMul_clicked();
    void on_btnDiv_clicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state;
    float result;
    short operand;

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();
};
#endif // MAINWINDOW_H
