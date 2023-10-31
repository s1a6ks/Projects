#include <iostream>

using namespace std;

int main() {
    double a, b, c, x;
    
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;
    cout << "Enter x" << endl;
    cin >> x;

    double result;

    if (x - 1 < 0 && b - x != 0) {
        result = a * x * x + b;
    } else if (x - 1 > 0 && b + x != 0) {
        result = (x - a) / x;
    } else {
        result = x / c;
    }

    cout << "F(x) = " << result << endl;

    return 0;
}
