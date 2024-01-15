#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int guesses = 0;
int maxnum = 0;

int game(int maxnum);

int main()
{
    //This program is a simple number guessing game.

    cout << "--------------------" << endl;
    cout << "|    ARVAUSPELI    |" << endl;
    cout << "--------------------" << endl << endl;

    //First, we ask the user to set the maximum number to be guessed, adjusting the difficulty of the game.
    cout << "********************" << endl;
    cout << "Anna korkein arvottava luku:" << endl;
    cin >> maxnum;
    cout << "********************" << endl << endl;

    //We call for the function game, and give it the maximum number.
    game(maxnum);

    //Once the function game is done and the correct number has been guessed, the user is congratulated and the number of guesses used is printed out.
    cout << endl << "Onneksi olkoon, arvasit oikein!" << endl;
    cout << "Arvasit yhteensa " << guesses << " kertaa." << endl << endl;

    return 0;
}

int game(int maxnum){
    //Generate a random number by using time as the seed.
    srand(time(NULL));
    int randomNumber = rand() % maxnum;
    randomNumber += 1;

    int guessNumber = 0;

    //The user will try to guess the number. User will be asked to provide a guess untill the number guessed and random number match.
    //Program will tell the user if the guessed number is lower or higher than the random number.
    while (guessNumber != randomNumber){
        cout << "Arvaa luku:" << endl;
        cin >> guessNumber;
        if (guessNumber < randomNumber){
            cout << "Arvattava luku on suurempi." << endl << endl;
            guesses += 1;
        }
        else if (guessNumber > randomNumber){
            cout << "Arvattava luku on pienempi." << endl << endl;
            guesses += 1;
        }
    }

    guesses += 1;

    return guesses;
}
