#include "animal.h"

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

string Animal::getColor() const
{
    return color;
}

Animal::Animal()
{
    cout << "Constructor for Animal called" << endl;

}

Animal::~Animal()
{
    cout << "Deconstructor for Animal called" << endl;
}
