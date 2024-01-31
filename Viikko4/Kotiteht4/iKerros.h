#ifndef IKERROS_H
#define IKERROS_H

class iKerros
{
public:
    virtual void maaritaAsunnot() = 0;
    virtual double laskeKulutus(double hinta) = 0;
};

#endif // IKERROS_H
