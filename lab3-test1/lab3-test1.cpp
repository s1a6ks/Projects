#include <iostream>

using namespace std;

int main() {
    double S, T;

    cout << "Enter the distance in kilometers: ";
    cin >> S;
    cout << "Enter the time in hours: ";
    cin >> T;

    double V = S / T;

    if (V > 60) {
        cout << "The driver violated the traffic rules." << endl;
    } else {
        cout << "The driver did not violate the traffic rules." << endl;
    }

    return 0;
}