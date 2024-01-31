#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <animal.h>

class Dog : public Animal
{
private:
    string breed;
    string name;
public:
    Dog();
    void dogInfo();
    void setBreed(const string &newBreed);
    void setName(const string &newName);
    string getBreed() const;
    string getName() const;
};

#endif // DOG_H
