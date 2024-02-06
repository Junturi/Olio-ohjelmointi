#ifndef IKERROS_H
#define IKERROS_H

//Virtuaalinen luokka iKerros, joka periytyy sekä katutasoon että kerrokseen.
//Näin vältytään ylimääräisten asuntojen luomiselta siinä vaiheessa kun luodaan objekti Katutasosta
//Virtuaaliluokassa esitellään pelkästään peritytyvissä luokissa käytettävät metodit.
//Metodit tulee muistaa merkitä virtuaalisiksi.

class iKerros
{
public:
    virtual void maaritaAsunnot() = 0;
    virtual double laskeKulutus(double hinta) = 0;
};

#endif // IKERROS_H
