#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    double hinta = 1;
    Kerrostalo *objtalo;
    objtalo = new Kerrostalo;
    double taloKulutus = objtalo->laskeKulutus(hinta);

    cout << "Kerrostalon kulutus yhteensa, kun hinta = " << hinta << " on " << taloKulutus << endl;

    delete objtalo;
    objtalo = nullptr;

    return 0;
}
