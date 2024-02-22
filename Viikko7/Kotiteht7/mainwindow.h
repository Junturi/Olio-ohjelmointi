#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();

private slots:
    void on_btnPlayer1_clicked();
    void on_btnPlayer2_clicked();
    void on_btn120_clicked();
    void on_btn300_clicked();
    void on_btnStart_clicked();
    void on_btnReset_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer = 1;
    short gameTime;
    QTimer *pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
