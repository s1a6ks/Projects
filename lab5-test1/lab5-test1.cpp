#include <iostream>

using namespace std;

int main()
{

    char firstVariable, secondVariable;

    cin >> firstVariable;
    cin >> secondVariable;

    char *ptr_firstV = &firstVariable;
    char *ptr_secondV = &secondVariable;

    char temp = *ptr_firstV;
    *ptr_firstV = *ptr_secondV;
    *ptr_secondV = temp;

    cout << "first variable = " << firstVariable << "\n";
    cout << "second variable = " << secondVariable;


    return 0;
}