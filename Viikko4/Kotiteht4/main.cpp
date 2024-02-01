#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    double hinta = 1;
    Kerrostalo objtalo;
    double taloKulutus = objtalo.laskeKulutus(hinta);

    cout << "Kerrostalon kulutus yhteensa, kun hinta = " << hinta << " on " << taloKulutus << endl;

    return 0;
}
