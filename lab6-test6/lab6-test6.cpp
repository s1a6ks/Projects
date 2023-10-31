#include <iostream>
#include <ctime> // Include for seeding the random number generator

using namespace std;

int main() {
    int N;
    cout << "Enter the number of classes (15 < N < 20): ";
    cin >> N;
15
    if (N <= 15 || N >= 20) {
        cout << "Invalid input. The number of classes should be between 16 and 19." << endl;
        return 1;
    }

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    int** school = new int*[N];
    for (int i = 0; i < N; ++i) {
        school[i] = new int[30];
        for (int j = 0; j < 30; ++j) {
            school[i][j] = rand() % 101; // Random scores between 0 and 100
        }
    }

    for (int i = 0; i < N; ++i) {
        int min_score = school[i][0];
        int max_score = school[i][0];
        int min_index = 0;
        int max_index = 0;

        for (int j = 1; j < 30; ++j) {
            if (school[i][j] < min_score) {
                min_score = school[i][j];
                min_index = j;
            }
            if (school[i][j] > max_score) {
                max_score = school[i][j];
                max_index = j;
            }
        }

        cout << "Class " << i + 1 << ":\n";
        cout << "Best student: Student " << max_index + 1 << " scores\n";
        cout << "Worst student: Student " << min_index + 1 << " scores\n";
    }

    for (int i = 0; i < N; ++i) {
        delete[] school[i];
    }
    delete[] school;

    return 0;
}
