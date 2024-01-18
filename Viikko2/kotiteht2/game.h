#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class Game
{
public:
    Game(int);
    ~Game();
    void play(void);

private:
    int maxNumber = 0;
    int playerGuess = 0;
    int numOfGuesses = 0;
    int randomNumber = 0;
    void printGameResult(void);
};

#endif // GAME_H
