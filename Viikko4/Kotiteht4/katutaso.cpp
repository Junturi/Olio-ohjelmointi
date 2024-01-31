#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu." << endl;
}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritellaan kaksi asuntoa katutasoon:" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double hinta)
{
    double katutasoKulutus = as1.laskeKulutus(hinta)+as2.laskeKulutus(hinta);
    return katutasoKulutus;
}
