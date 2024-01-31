#include "katutaso.h"
#include "kerros.h"
#include <iostream>

using namespace std;

int main()
{
    double hinta = 1;
    Kerros objkerros;
    Katutaso objkatutaso;
    objkerros.maaritaAsunnot();
    objkatutaso.maaritaAsunnot();

    auto katutasoKulutus = objkatutaso.laskeKulutus(hinta);
    cout << "Katutason kulutus, kun hinta = " << hinta << " on " << katutasoKulutus << endl;

    auto kerroskulutus = objkerros.laskeKulutus(hinta);
    cout << "Kerroksen kulutus, kun hinta = " << hinta << " on " << kerroskulutus << endl;

    cout << "Katutason ja kerroksen kulutus yhteensa, kun hinta = " << hinta << " on " << kerroskulutus+katutasoKulutus << endl;

    return 0;
}
