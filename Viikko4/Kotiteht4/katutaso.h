#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "iKerros.h"
#include <iostream>

using namespace std;


class Katutaso : public iKerros
{
public:
    Katutaso();
    ~Katutaso();
    Asunto as1;
    Asunto as2;
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double hinta) override;
};

#endif // KATUTASO_H
