#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double V1, V2, A, T;
    cout << "Enter the initial velocity of the first car (km/h): ";
    cin >> V1;
    cout << "Enter the initial velocity of the second car (km/h): ";
    cin >> V2;
    cout << "Enter the acceleration (km/s^2): ";
    cin >> A;
    cout << "Enter the time (hours): ";
    cin >> T;

    V1 /= 3600;
    V2 /= 3600;

    double D = (V1 + V2) * T + 0.5 * A * pow(T, 2);

    cout << "The distance between the cars after " << T << " hours is " << D << " kilometers." << endl;

    return 0;
}
