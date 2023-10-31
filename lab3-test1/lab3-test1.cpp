#include <iostream>
#include <math.h>

using namespace std;

int main()
{   
    double s,t,v;
    cout << "enter speed" << endl;
    cin >> s;
    cout << "enter time" << endl;
    cin >> t;

    v = s / t; 

    double v1 = v * 60; 

    if(v1 <= 60)
        cout << "the driver did not break the rules: " << v1 << " km/h";
    else
        cout<< "\nthe driver broke the rules :"<< v1 << " km/h";
    
    return 0;

}