#include <iostream>

using namespace std;

int main() {
    const int sequenceSize = 100;
    int sequence[sequenceSize];
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    int minIndex, maxIndex;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < sequenceSize; i++) {
        if (sequence[i] < minValue) {
            minValue = sequence[i];
            minIndex = i;
        }
        if (sequence[i] > maxValue) {
            maxValue = sequence[i];
            maxIndex = i;
        }
    }

    for (int i = min(minIndex, maxIndex); i <= max(minIndex, maxIndex); i++) {
        sum += sequence[i];
        count++;
    }

    double average = static_cast<double>(sum) / count;
    cout << "The average of numbers between the minimum and maximum is: " << average << endl;

    return 0;
}
