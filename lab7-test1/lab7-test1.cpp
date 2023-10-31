#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int left = 0;
    int right = word.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (word[left] != word[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
