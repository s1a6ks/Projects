#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the value of n (n >= 4): ";
    cin >> n;

    if (n < 4) {
        cout << "n should be greater than or equal to 4." << endl;
        return 1; 
    }

    double b1 = 0, b2 = 0, b3 = 1;
    double bi;

    for (int i = 4; i <= n; ++i) {
        bi = (static_cast<double>(i + 1) / (i + 2)) * b1 + b2 * b3;
        b1 = b2;
        b2 = b3;
        b3 = bi;
    }

    cout << "The value of bn is: " << bi << endl;

    return 0;
}
