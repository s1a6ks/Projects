#include <iostream>

#include <math.h>
using namespace std;

int main()

{   
    double A, B;

    cout << "enter A"<< endl;
    cin >> A;
    cout << "enter B"<< endl;
    cin >> B;

    double z1 = (pow(cos(A) - cos(B),2)) - (pow(sin(A) - sin(B),2));

    double z2 = -4 * pow(sin((A - B)/2), 2) * cos(A + B);

    cout <<"z1 = "<< z1;

    cout <<"\nz2 = "<< z2;



    return 0;

}