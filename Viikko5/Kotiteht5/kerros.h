#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include "iKerros.h"
#include <iostream>

using namespace std;

class Kerros : public iKerros
{
public:
    Kerros();
    virtual ~Kerros();
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double hinta) override;
private:
    Asunto * as1;
    Asunto * as2;
    Asunto * as3;
    Asunto * as4;
};

#endif // KERROS_H
