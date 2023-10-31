#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double circumference;

    cout << "Enter the length of the circle: ";
    cin >> circumference;

    const double pi = 3.14159265359;
    double* radiusPtr = new double;
    *radiusPtr = circumference / (2 * pi);

    double* areaPtr = new double;
    *areaPtr = pi * pow(*radiusPtr, 2);

    cout << "area of a circle: " << *areaPtr << endl;

    return 0;
}
