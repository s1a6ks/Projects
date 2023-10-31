#include <iostream>

using namespace std;

double PowerN(double X, int N) {
    if (N == 0) {
        return 1.0;
    } else if (N > 0) {
        if (N % 2 == 0) {
            double halfPower = PowerN(X, (N / 2) * 2);
            return halfPower * halfPower;
        } else {
            double halfPower = PowerN(X, (N - 1) * 2);
            return X * halfPower * halfPower;
        }
    } else {
        return 1.0 / PowerN(X, -N);
    }
}

int main() {
    double X;
    int N;
    cout << "Enter X: ";
    cin >> X;
    cout << "Enter N: ";
    cin >> N;

    double result = PowerN(X, N);
    cout << "X^N = " << result << endl;

    return 0;
}
