#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(static_cast<unsigned int>(time(nullptr)));

    int firstMas[99];
    int secondMas[99];

    for (int i = 0; i < 100; ++i)
    {
        firstMas[i] = rand() % 100;
        secondMas[i] = rand() % 100;
    }


    cout << "_________________before_____________________"
         << "\n";

    for (int i = 0; i < 100; i++)
    {
        cout << "firstMasElem[" << i << "]"
             << " = " << firstMas[i] << "\t\t"
             << "secondMasElem[" << i << "]"
             << " = " << secondMas[i] << "\n";
    }

    for (int i = 0; i < 100; i++)
    {
        firstMas[i] = firstMas[i] + secondMas[i];
        secondMas[i] = firstMas[i] - secondMas[i];
        firstMas[i] = firstMas[i] - secondMas[i];
    }

    cout << "_________________after_____________________"
         << "\n";

    for (int i = 0; i < 100; i++)
    {
        cout << "firstMasElem[" << i << "]"
             << " = " << firstMas[i] << "\t\t"
             << "secondMasElem[" << i << "]"
             << " = " << secondMas[i] << "\n";
    }
    return 0;
}
