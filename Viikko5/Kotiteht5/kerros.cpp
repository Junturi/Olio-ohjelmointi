#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu." << endl;

}

Kerros::~Kerros()
{
    cout << "Kerros tuhottu" << endl;
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritellaan nelja asuntoa kerrokseen:" << endl;
    as1 = new Asunto;
    as1->maarita(2,100);
    as2 = new Asunto;
    as2->maarita(2,100);
    as3 = new Asunto;
    as3->maarita(2,100);
    as4 = new Asunto;
    as4->maarita(2,100);

}

double Kerros::laskeKulutus(double hinta)
{
    double kerrosKulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta) + as4->laskeKulutus(hinta);
    return kerrosKulutus;
};
