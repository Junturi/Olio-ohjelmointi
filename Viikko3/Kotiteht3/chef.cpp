#include "chef.h"

Chef::Chef(string a)
{
    name = a;
    cout << "Chef " << name << " constructor." << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " deconstructor." << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad." << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup." << endl;
}
