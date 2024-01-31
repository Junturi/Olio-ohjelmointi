#ifndef PERSON_H
#define PERSON_H
#include "cat.h"
#include "dog.h"
#include <iostream>

using namespace std;


class Person
{
private:
    string fname;
    string lname;
    Cat objectCat1;
    //Luodaan Cat-luokan olio
    //Kyseessä vahva kooste = Composition
    Dog objectDog1;

public:
    Person();
    Person(string fn, string ln);
    ~Person();
    void setFname(const string &newFname);
    void setLname(const string &newLname);
    void personInfo();
    void setCatData();
    void setDogData();
};

#endif // PERSON_H
