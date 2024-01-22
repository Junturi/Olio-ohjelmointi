#include <iostream>
#include "cat.h"
#include "animal.h"
#include "bear.h"

using namespace std;

int main()
{
    Cat objectCat;
    objectCat.setColor("black");
    cout << "********************" << endl;
    cout << "Color of the first cat is " << objectCat.getColor() << endl;
    cout << "********************" << endl;

    Cat *objectCat2 = new Cat;
    objectCat2->setColor("orange");
    objectCat2->setName("Garfield");
    objectCat2->catInfo();
    //cout << "The second cat is " << objectCat2->getColor() << endl;
    delete objectCat2;
    objectCat2 = nullptr;

    Bear *objectBear = new Bear;
    objectBear->setSpecies("polar");
    objectBear->setColor("white");
    objectBear->bearInfo();
    delete objectBear;
    objectBear = nullptr;

    return 0;
}
