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
    cout << "Asunnon kulutus, kun hinta = 1 on " << laskeKulutus(1) << endl;

}

double Asunto::laskeKulutus(double c)
{
    return asukasMaara*neliot*c;
}
