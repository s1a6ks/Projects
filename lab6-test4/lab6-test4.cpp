#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (matrix[i][i] == 0) {
            zeroCount++;
        }
    }

    cout << "The number of zero elements on the main diagonal: " << zeroCount << endl;

    return 0;
}
