#include <iostream>
#include <cmath>

using namaspace std;

int main() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;

    double result = 0;
    int n = 0;
    double term = 1.0;

    while (fabs(term) > 1e-10) {
        result += term;
        n++;
        term = (term * (-x * x)) / (2 * n * (2 * n - 1));
    }

    cout << "Approximation of cos(x) using " << n << " terms: " << result << endl;

    return 0;
}
