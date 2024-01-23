#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef1("Gordon Ramsay");
    chef1.setName("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    Chef chef2("Anthony Bourdain");
    chef2.setName("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();

    return 0;
}
