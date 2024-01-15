#include <iostream>

using namespace std;

int main()
{
    //sovellus tulostaa satunnaisluvun väliltä 1-10
    srand(15); //asetetaan siemenluku kellonajan avulla
    int myRandom = rand() %10+1; //satunnaisluku on jakojäännös jaettaessa 10:llä
    cout << "Satunnaisluku = " << myRandom << endl;
    return 0;
}
