#include <iostream>

/*
 * (1) Kirjoita funktio, joka ottaa vastaan kaksi kokonaislukua.
 * Funktio kertoo molemmat luvut kahdella ja tulostaa niiden summan
 *Tulosta myös alkuperäiset luvut ennen ja jälkeen funktiokutsun.
*/

using namespace std;

void calculateProduct(int a, int b);

int main()
{
    int a = 5, b = 9;

    cout << "Aluksi mainissa a = " << a << endl;
    cout << "Aluksi mainissa b = " << b << endl;
    calculateProduct(a, b);
    cout << "Lopuksi mainissa a = " << a << endl;
    cout << "Lopuksi mainissa b = " << b << endl;
    return 0;
}

void calculateProduct(int a, int b){
    a *=2;
    b *=2;
    int sum = a+b;

    cout << "Funktiossa a = " << a << endl;
    cout << "Funktiossa b = " << b << endl;
    cout << "Summa on " << sum << endl;
}
