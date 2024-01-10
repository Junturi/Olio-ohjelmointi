#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int guesses = 0;
int maxnum = 0;

int game(int maxnum);

int main()
{
    cout << "--------------------" << endl;
    cout << "|    ARVAUSPELI    |" << endl;
    cout << "--------------------" << endl << endl;

    cout << "********************" << endl;
    cout << "Anna korkein arvottava luku:" << endl;
    cin >> maxnum;

    cout << "********************" << endl << endl;

    game(maxnum);

    cout << "Arvasit yhteensa " << guesses << " kertaa." << endl << endl;

    return 0;
}

int game(int maxnum){
    //Generate a random number by using time as the seed
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

    //Once the number is guessed correctly, a congratulation is printed and the program is closed.
    cout << endl << "Onneksi olkoon, arvasit oikein!" << endl;

    return guesses;
}
