#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square table: ";
    cin >> n;

    double table[100][100];

    cout << "Enter the elements of the table:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> table[i][j];
        }
    }

    double minValue = table[0][0];
    int minCount = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] < minValue) {
                minValue = table[i][j];
                minCount = 1;
            } else if (table[i][j] == minValue) {
                minCount++;
            }
        }
    }

    cout << "The number of minimum elements in the table: " << minCount << endl;

    return 0;
}
