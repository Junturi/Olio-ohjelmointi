#include "game.h"

Game::Game()
{

}

Game::~Game()
{
    cout << "Game-luokan tuhoajan kutsuttiin." << endl;
}

void Game::setMaxNumber(int newMaxNumber)
{
    maxNumber = newMaxNumber;
}

int Game::getMaxNumber() const
{
    return maxNumber;
}
