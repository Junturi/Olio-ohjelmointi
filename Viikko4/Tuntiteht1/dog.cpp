#include "dog.h"

void Dog::setBreed(const string &newBreed)
{
    breed = newBreed;
}

void Dog::setName(const string &newName)
{
    name = newName;
}

string Dog::getBreed() const
{
    return breed;
}

string Dog::getName() const
{
    return name;
}

Dog::Dog()
{

}

void Dog::dogInfo()
{
    cout << "Nimeni on " << name << ", olen rodultani " << breed << "ja varini on " << color << endl;

}
