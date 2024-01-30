#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"
#include <iostream>

using namespace std;


class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    Asunto as1;
    Asunto as2;
    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KATUTASO_H
