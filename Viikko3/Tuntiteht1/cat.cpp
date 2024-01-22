#include "cat.h"

void Cat::setName(const string &newName)
{
    name = newName;
}

string Cat::getName() const
{
    return name;
}

void Cat::catInfo()
{
    cout << "********************" << endl;
    //If color is private
    cout << "My name is " << name << ", and I'm a " << getColor() << " cat." << endl;

    //If color is public or protected
    cout << "My name is " << name << ", and I'm a " << color << " cat." << endl;
    cout << "********************" << endl;
}

Cat::Cat()
{
    cout << "Constructor for Cat called" << endl;
}

Cat::~Cat()
{
    cout << "Deconstructor for Cat called" << endl;
}
