#ifndef BEAR_H
#define BEAR_H
#include <iostream>
#include "animal.h"

using namespace std;

class Bear: public Animal
{
private:
    string species;

public:
    Bear();
    ~Bear();
    void setSpecies(const string &newSpecies);
    string getSpecies() const;
    void bearInfo();
};

#endif // BEAR_H
