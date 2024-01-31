#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
private:
         //string color;

public:
    Animal();
    ~Animal();
    void setColor(const string &newColor);
    string getColor() const;

protected:
    string color;
};

#endif // ANIMAL_H
