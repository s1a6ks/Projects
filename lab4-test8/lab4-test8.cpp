#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter the number of values n: ";
    cin >> n;

    if (n <= 0) {
        cout << "n should be a positive number." << endl;
        return 1; 
    }

    cout << "Enter " << n << " integer values separated by spaces: ";

    for (int i = 0; i < n; ++i) {
        int qi;
        cin >> qi;

        if (qi % 7 != 0) {
            sum += qi;
        }
    }

    cout << "Sum of values that are not multiples of 7: " << sum << endl;

    return 0;
}
