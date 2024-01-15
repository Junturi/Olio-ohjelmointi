#include <iostream>

/*
 * (1) Kirjoita funktio, joka ottaa vastaan kaksi kokonaislukua.
 * Funktio kertoo molemmat luvut kahdella ja tulostaa niiden summan
 *Tulosta myös alkuperäiset luvut ennen ja jälkeen funktiokutsun.
 *
 *(2) Kirjoita gunktio, kuten edellä, mutta funktion on tuplattava alkuperäisten muuttujien arvot.
 *Nyt funktiossa on otettava vastaan muuttujien osoitteet.
 *Funktion kutsussa argumentteina annetaan muuttujien osoitteet.
*/

using namespace std;

void calculateProduct(int a, int b);
void calculateProduct2(int *a, int *b);

int main()
{
    int a = 5, b = 9;

    cout << "Aluksi mainissa a = " << a << endl;
    cout << "Aluksi mainissa b = " << b << endl << endl;

    calculateProduct(a, b);
    cout << "Lopuksi mainissa a = " << a << endl;
    cout << "Lopuksi mainissa b = " << b << endl << endl;

    calculateProduct2(&a, &b);
    cout << "Lopuksi mainissa a = " << a << endl;
    cout << "Lopuksi mainissa b = " << b << endl << endl;
    return 0;
}

void calculateProduct(int a, int b){
    a *=2;
    b *=2;
    int sum = a+b;

    cout << "Funktiossa(1) a = " << a << endl;
    cout << "Funktiossa(1) b = " << b << endl;
    cout << "Summa(1) on " << sum << endl;
}

void calculateProduct2(int *a, int *b){
    *a *= 2;
    *b *= 2;
    int sum = *a + *b;
    cout << "Funktiossa(2) a = " << *a << endl;
    cout << "Funktiossa(2) b = " << *b << endl;
    cout << "Summa(2) on " << sum << endl;
}
