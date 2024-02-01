#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu." << endl;

}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritellaan nelja asuntoa kerrokseen:" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);

}

double Kerros::laskeKulutus(double hinta)
{
    double kerrosKulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + as3.laskeKulutus(hinta) + as4.laskeKulutus(hinta);
    return kerrosKulutus;
};
