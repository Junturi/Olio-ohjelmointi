#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu." << endl;
    eka = new Katutaso;
    eka->maaritaAsunnot();
    toka = new Kerros;
    toka->maaritaAsunnot();
    kolmas = new Kerros;
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    cout << "Kerrostalo tuhottu" << endl;
    delete eka;
    eka = nullptr;
    delete toka;
    toka = nullptr;
    delete kolmas;
    kolmas = nullptr;

}

double Kerrostalo::laskeKulutus(double hinta)
{
    double taloKulutus = eka->laskeKulutus(hinta)+toka->laskeKulutus(hinta)+kolmas->laskeKulutus(hinta);
    return taloKulutus;
}
