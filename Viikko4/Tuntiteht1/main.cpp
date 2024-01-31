#include "person.h"
#include <iostream>

using namespace std;

int main()
{
    Person objectPerson1("Matti","Mainio");
    objectPerson1.setCatData();
    objectPerson1.setDogData();
    objectPerson1.personInfo();
    return 0;
}
