#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a text: ";
    getline(cin, input);

    string evenChars = "";
    string oddChars = "";

    for (int i = 0; i < input.length(); i++) {
        if (i % 2 == 0) {
            evenChars += input[i];
        } else {
            oddChars += input[i];
        }
    }

    string result = evenChars + oddChars;
    cout << "Text with even and odd characters swapped: " << result << endl;

    return 0;
}
