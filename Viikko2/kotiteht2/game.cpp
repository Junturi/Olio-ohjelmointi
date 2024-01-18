#include "game.h"

//Constructor:
//Takes an integer parameter and saves it into integer parameter maxNumber
//Prints out the value of parameter maxNumber
Game::Game(int y)
{
    maxNumber = y;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value." << endl;
}

//Deconstructor:
//Automatically deletes the objects created within the class
//Prints out a message when called
Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory." << endl;
}

//Function generates random number, asks player guess, checks the guess against the random number and calls the function printGameResult
void Game::play()
{
    //Generates random number with the parameter maxNumber
    //One is added to the generated number so that the scale is from 1 to maxNumber - otherwise would be 0 to maxNumber-1
    srand(time(NULL));
    randomNumber = rand() % maxNumber;
    randomNumber += 1;

    //While player guesses the number wrong, the game keeps on going
    while(playerGuess != randomNumber){
        //Prompt the player to guess a number between 1- maxNumber
        //Save the player's number to integer playerGuess
        //Add one to the integer numOfGuesses
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses += 1;

        //Check the playerGuess against randomNumber
        //If the guess is larger or smaller, print out corresponding prompt
        if(playerGuess > randomNumber){
            cout << "Your guess is too big" << endl;
        }
        else if(playerGuess < randomNumber){
            cout << "Your guess is too small" << endl;
        }
    }

    //Once the playerGuess is equal to randomNumber, call function printGameResult
    printGameResult();
}

//Once called, the function will print out the randomNumber and number of guesses needed
void Game::printGameResult()
{
    cout << "Your guess is right = " << randomNumber << endl;
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses." << endl;
}
