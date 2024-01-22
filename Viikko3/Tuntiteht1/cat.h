#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "animal.h"

using namespace std;

class Cat : public Animal
{
private:
    string name;
public:
    Cat();
    ~Cat();
    void setName(const string &newName);
    string getName() const;
    void catInfo();
};

#endif // CAT_H
