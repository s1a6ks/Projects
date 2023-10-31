#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 2; i <= 2 * n; i += 2) {
        sum += i;
    }

    cout << "sum: " << sum << endl;
    return 0;
}