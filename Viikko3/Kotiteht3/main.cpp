#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef1("Jyrki");
    ItalianChef chef3("Mario",100,50);

    chef1.makeSalad();
    chef1.makeSoup();
    chef3.makePasta();

    return 0;
}
