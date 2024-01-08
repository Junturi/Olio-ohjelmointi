#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Practice the use of cout and cin:
    //Make a short program, that asks for three numbers, calculates the average and prints the result.

    float a, b, c;
    cout<<"Anna 1. luku:"<<endl;
    cin>>a;
    cout<<"Anna 2. luku:"<<endl;
    cin>>b;
    cout<<"Anna 3. luku:"<<endl;
    cin>>c;

    float average = (a+b+c)/3;
    cout<<setprecision(2)<<fixed;
    cout<<"Keskiarvo on "<<average<<endl;
    return 0;
}
