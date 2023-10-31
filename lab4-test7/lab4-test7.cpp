#include <iostream>

using namespace std;

int main() {
    int n;
    double product = 1.0;

    cout << "Enter the number of values n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n should be a natural number." << endl;
        return 1; 
    }

    for (int i = 1; i <= n; ++i) {
        double ai;
        cout << "Enter the value a" << i << ": ";
        cin >> ai;
        product *= ai;
    }

    cout << "Product of a1 * a2 * ... * an = " << product << endl;

    return 0;
}
