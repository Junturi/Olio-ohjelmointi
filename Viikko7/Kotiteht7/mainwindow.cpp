#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Disable the Start-button. It will be enabled once gametime has been chosen.
    ui->btnStart->setDisabled(true);

    //Create a new object from heap
    pQTimer = new QTimer();

    //Adjust progress bar settings:
    //Select the format so that the numbers next to the bar show current value and max value instead of percentage
    ui->barPlayer1->setFormat("%v/%m");
    ui->barPlayer2->setFormat("%v/%m");

    //Set the progress bar values to 0
    ui->barPlayer1->setValue(0);
    ui->barPlayer2->setValue(0);

    //Print the text on font size 14
    setGameInfoText("Select playtime and press start game!",14);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::timeout()
{
    //Check which player is currently playing and update corresponding progress bar
    if (currentPlayer == 1){
        player1Time--;
        updateProgressBar();
        qDebug() << "Player 1 timer active, playtime left" << player1Time << " seconds.";
    }
    else {
        player2Time--;
        updateProgressBar();
        qDebug() << "Player 2 timer active, playtime left" << player2Time << " seconds.";
    }
}


void MainWindow::on_btnPlayer1_clicked()
{
    //When button is clicked, switch the current player
    currentPlayer = 2;
    setGameInfoText("Game ongoing. Player 2 turn.",16);
    qDebug() << "Player 1 clicked button, switch to Player 2";
}


void MainWindow::on_btnPlayer2_clicked()
{
    currentPlayer = 1;
    setGameInfoText("Game ongoing. Player 1 turn.",16);
    qDebug() << "Player 2 clicked button, switch to Player 1";
}


void MainWindow::on_btn120_clicked()
{
    //Set the gametime
    gameTime = 120;
    setGameInfoText("Selected game time: 120 seconds. Ready to start the game.",14);

    //Enable start-button
    ui->btnStart->setDisabled(false);

    //Update the max value on the progress bars
    ui->barPlayer1->setMaximum(gameTime);
    ui->barPlayer2->setMaximum(gameTime);

    qDebug() << "Gametime: 120 seconds";
}


void MainWindow::on_btn300_clicked()
{
    gameTime = 300;
    setGameInfoText("Selected game time: 5 minutes. Ready to start the game.",14);

    ui->btnStart->setDisabled(false);
    ui->barPlayer1->setMaximum(gameTime);
    ui->barPlayer2->setMaximum(gameTime);

    qDebug() << "Gametime: 300 seconds (5 minutes)";
}


void MainWindow::on_btnStart_clicked()
{
    //Set the current player as player 1
    currentPlayer = 1;
    setGameInfoText("Game started. Player 1 goes first",16);

    //Set each player's time equal to the gametime
    player1Time = gameTime;
    player2Time = gameTime;

    //Initialise the clock by connecting pQTimer signal to timeout function
    connect (pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    //Start the clock. Generate a tick once per second.
    pQTimer->start(1000);

    qDebug() << "Start clicked, player 1 active, start the timer";
}


void MainWindow::on_btnReset_clicked()
{
    //Stop the clock and disconnect the signal
    //If signal is not disconnected, the clock will generate additional ticks per second
    pQTimer->stop();
    pQTimer->disconnect();

    //Set the progress bar values to 0
    ui->barPlayer1->setValue(0);
    ui->barPlayer2->setValue(0);

    setGameInfoText("To start a new game, select playtime and press start game!",14);

    qDebug() << "Reset clicked, stop the timer";
}

void MainWindow::updateProgressBar()
{
    //Update progress bar values
    ui->barPlayer1->setValue(player1Time);
    ui->barPlayer2->setValue(player2Time);

    //If either player time reaches 0, the game ends
    //Stop and disconnect the clock and set progress bars to 0
    if (player1Time == 0){
        pQTimer->stop();
        pQTimer->disconnect();
        ui->barPlayer1->setValue(0);
        ui->barPlayer2->setValue(0);
        setGameInfoText("Game over! Player 2 won!",24);
    }
    else if (player2Time == 0){
        setGameInfoText("Game over! Player 1 won!",14);
        pQTimer->stop();
        pQTimer->disconnect();
        ui->barPlayer1->setValue(0);
        ui->barPlayer2->setValue(0);
    }

}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    //Adjust the font size
    QFont font;
    font.setPointSize(fontSize);
    ui->labelText->setFont(font);

    ui->labelText->setText(text);
}

