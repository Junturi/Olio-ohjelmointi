#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu." << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double taloKulutus = eka.laskeKulutus(hinta)+toka.laskeKulutus(hinta)+kolmas.laskeKulutus(hinta);
    return taloKulutus;
}
