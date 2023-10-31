#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    string cleanStr1 = "";
    string cleanStr2 = "";

    for (char c : str1) {
        if (c != ' ') {
            cleanStr1 += tolower(c);
        }
    }

    for (char c : str2) {
        if (c != ' ') {
            cleanStr2 += tolower(c);
        }
    }

    if (cleanStr1.length() != cleanStr2.length()) {
        cout << "The strings are not anagrams." << endl;
        return 0;
    }

    int len = cleanStr1.length();
    bool areAnagrams = true;

    for (int i = 0; i < len; i++) {
        bool found = false;

        for (int j = 0; j < len; j++) {
            if (cleanStr1[i] == cleanStr2[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            areAnagrams = false;
            break;
        }
    }

    if (areAnagrams) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
