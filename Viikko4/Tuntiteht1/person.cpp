#include "person.h"

void Person::setFname(const string &newFname)
{
    fname = newFname;
}

void Person::setLname(const string &newLname)
{
    lname = newLname;
}

void Person::personInfo()
{
    cout << "***----***" << endl;
    cout << "Person info:" << endl;
    cout << "Nimeni on "<< fname << " " << lname << endl;
    cout << "Kissani tiedot: " << endl;
    objectCat1.catInfo();
    cout << "Koirani tiedot:" << endl;
    objectDog1.dogInfo();
    cout << "***----***" << endl;
}

void Person::setCatData()
{
    objectCat1.setName("Karvinen");
    objectCat1.setColor("oranssi");
}

void Person::setDogData()
{
    objectDog1.setColor("Musta");
    objectDog1.setBreed("Chihuahua");
    objectDog1.setName("Turri");

}

Person::Person()
{
    cout << "Person constructor" << endl;

}

Person::Person(string fn, string ln)
{
    cout << "Person constructor" << endl;
    fname = fn;
    lname = ln;
}

Person::~Person()
{
    cout << "Person deconstructor" << endl;
}

