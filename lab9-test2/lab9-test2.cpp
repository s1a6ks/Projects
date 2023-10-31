#include <iostream>
using namespace std;

int calculateExpression(int n, int numbers[]) {
    if (n < 5 || n >= 10) {
        cout << "Error: n must be between 5 and 9." << endl;
        return -1;
    }

    int result = 2 * (numbers[0] + numbers[n - 1]);
    return result;
}

int main() {
    int n;
    std::cout << "Enter n (4 < n < 10):";
    std::cin >> n;

    if (n < 5 || n >= 10) {
        std::cout << "Error: n must be between 5 and 9." << endl;
        return 1;
    }

    int numbers[n];
    std::cout << "enter " << n << " natural numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int result = calculateExpression(n, numbers);
    if (result != -1) {
        std::cout << "result: " << result << endl;
    }

    return 0;
}
