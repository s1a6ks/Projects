#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the sequence: ";
    cin >> n;

    int sequence[100];

    cout << "Enter the sequence of numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    int duplicateCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sequence[i] == sequence[j]) {
                duplicateCount++;
                break;
            }
        }
    }

    cout << "The number of elements that appear more than once in the sequence: " << duplicateCount << endl;

    return 0;
}
