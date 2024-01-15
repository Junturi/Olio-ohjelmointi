#include "student.h"
#include <iostream>

using namespace std;

//Esimerkki Student-luokasta, jolla private-tyyppiset jäsenmuuttujat fname, lname
//ja niille public-tyyppiset Getter ja Setter -metodit sekä Public-tyyppinen studentInfo, joka tulostaa tiedot



int main()
{
    //Luodaan Student-luokasta olio pinoon
    Student objectStudent1;
    objectStudent1.setFname("Teppo");
    objectStudent1.setLname("Testi");
    objectStudent1.studentInfo();
    return 0;
}
