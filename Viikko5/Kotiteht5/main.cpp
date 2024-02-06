#include "kerrostalo.h"
#include "kerros.h"
#include <iostream>

using namespace std;

int main()
{
    Kerros *objKerros;
    objKerros = new Kerros;
    objKerros->maaritaAsunnot();
    objKerros->laskeKulutus(1);
    delete objKerros;

    /*
    double hinta = 3;
    Kerrostalo objtalo;
    double taloKulutus = objtalo.laskeKulutus(hinta);

    cout << "Kerrostalon kulutus yhteensa, kun hinta = " << hinta << " on " << taloKulutus << endl;*/

    return 0;
}
