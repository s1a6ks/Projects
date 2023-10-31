#include <iostream>

using namespace std;

int main() {
    int n;
    double x;
    double result = 0.0;

    cout << "Enter a natural number n: ";
    cin >> n;
    cout << "Enter a real number x: ";
    cin >> x;

    for (int k = 1; k <= n; ++k) {
        for (int m = k; m <= n; ++m) {
            result += (x + k) / static_cast<double>(m);
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}
