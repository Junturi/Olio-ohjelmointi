#include "student.h"

string Student::getLname() const
{
    return lname;
}

void Student::setLname(const string &newLname)
{
    lname = newLname;
}

string Student::getFname() const
{
    return fname;
}

void Student::setFname(const string &newFname)
{
    fname = newFname;
}

Student::Student()
{

}

void Student::studentInfo()
{
    cout << "Etunimeni on " << fname << " sukunimeni on " << lname << endl;

}
