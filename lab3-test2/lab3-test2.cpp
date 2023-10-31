#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, firstResult, secondResult;

    cout << "enter x" << endl;
    cin >> x;
    cout << "enter y" << endl;
    cin >> y;
    

    if(pow(x,2) > y){
        firstResult = pow(x,2);
    }
    else{
        firstResult = y;
    }

    if(pow(y,2) > x){
        secondResult = pow(y,2);
    }
    else{
        secondResult = x;
    }

    cout << "result = " << firstResult + secondResult;

    return 0;

}