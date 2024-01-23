#include "italianchef.h"
#include "chef.h"

ItalianChef::ItalianChef(string b):Chef(b)
{
    name = b;
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
    cout << "Chef " << name << " makes pasta." << endl;
}
