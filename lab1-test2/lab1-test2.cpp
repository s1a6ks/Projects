#include <iostream>

using namespace std;

int main() {
    double weightPounds, weightKilograms;

    cout << "Enter weight: ";
    cin >> weightPounds;

    weightKilograms = weightPounds * 0.453592;

    cout << "Weight in kilograms: " << weightKilograms << " kg" << endl;

    return 0;
}