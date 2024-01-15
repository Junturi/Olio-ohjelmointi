#include <iostream>

using namespace std;

int calculateSum(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    cout << "Anna 1. luku: " << endl;
    cin >> a;
    cout << "Anna 2. luku: " << endl;
    cin >> b;

    sum = calculateSum(a, b);
    cout << "Lukujen summa on " << sum << endl;

    return 0;
}

int calculateSum(int a, int b){
    return a+b;
}
