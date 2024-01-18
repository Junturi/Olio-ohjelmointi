#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class Game
{
public:
    Game(int y){
        maxNumber = y;
    }
    ~Game();

private:
    int maxNumber;
    int playerGuess;
    int numOfGuesses;
    void printGameResult(void);
};

#endif // GAME_H
