#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    return 0;
}

int game(int maxnum){
    //Generate a random number by using time as the seed
    srand(maxnum);
    int randomNumber = rand() % 20;
    randomNumber += 1;

    int guessNumber = 0;

    //The user will try to guess the number. User will be asked to provide a guess untill the number guessed and random number match.
    //Program will tell the user if the guessed number is lower or higher than the random number.
    while (guessNumber != randomNumber){
        cout << "Arvaa luku:" << endl;
        cin >> guessNumber;
        if (guessNumber < randomNumber){
            cout << "Luku on suurempi." << endl;
        }
        else if (guessNumber > randomNumber){
            cout << "Luku on pienempi." << endl;
        }
    }

    int guesses = 0;

    //Once the number is guessed correctly, a congratulation is printed and the program is closed.
    cout << "Onneksi olkoon, arvasit oikein!" << endl;

    return guesses;
}