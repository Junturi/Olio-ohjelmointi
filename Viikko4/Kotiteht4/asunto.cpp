#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu." << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty, asukkaita " << asukasMaara << " ja nelioita " << neliot << endl;
}

double Asunto::laskeKulutus(double c)
{
    double asuntoKulutus = c*asukasMaara*neliot;
    cout << "Asunnon kulutus, kun hinta = " << c << " on " << asuntoKulutus << endl;
    return asuntoKulutus;
}