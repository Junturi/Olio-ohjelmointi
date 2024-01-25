#include "italianchef.h"
#include "chef.h"

ItalianChef::ItalianChef(string b, int c, int d):Chef(b)
{
    name = b;
    water = c;
    flour = d;
    cout << "Chef " << name << " constructor." << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << name << " deconstructor." << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe." << endl;
    cout << "Chef " << getName() << " uses " << water << " grams of water." << endl;
    cout << "Chef " << getName() << " uses " << flour << " grams of flour." << endl;
}
