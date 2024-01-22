#include "bear.h"

void Bear::setSpecies(const string &newSpecies)
{
    species = newSpecies;
}

string Bear::getSpecies() const
{
    return species;
}

void Bear::bearInfo()
{
    cout << "********************" << endl;
    cout << "I'm a " << species << " bear." << endl;
    cout << "My fur is " << color << endl;
    cout << "********************" << endl;
}

Bear::Bear()
{

    cout << "Constructor for Bear called" << endl;}

Bear::~Bear()
{
    cout << "Deconstructor for Bear called" << endl;
}
