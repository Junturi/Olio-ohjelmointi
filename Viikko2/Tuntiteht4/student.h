#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;


class Student
{
private:
    string fname;
    string lname;
public:
    Student();
    void studentInfo();
    string getLname() const;
    void setLname(const string &newLname);
    string getFname() const;
    void setFname(const string &newFname);
};

#endif // STUDENT_H
