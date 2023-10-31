#include <iostream>
#include <string>

using namespace std;

int main() {
    string caseAbbreviation;

    cout << "Enter a case abbreviation (n, r, d, z, o, m, k): ";
    cin >> caseAbbreviation;

    cout << "The questions associated with the provided case abbreviation are:" << endl;

    switch (caseAbbreviation[0]) {
        case 'n':
        case 'N':
            cout << "Nominative case: Who? What?" << endl;
            break;
        case 'r':
        case 'R':
            cout << "Genitive case: Whose?" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Dative case: To whom? To what?" << endl;
            break;
        case 'z':
        case 'Z':
            cout << "Accusative case: Whom? What?" << endl;
            break;
        case 'o':
        case 'O':
            cout << "Instrumental case: By whom? By what?" << endl;
            break;
        case 'm':
        case 'M':
            cout << "Locative case: Where?" << endl;
            break;
        case 'k':
        case 'K':
            cout << "Vocative case: Addressing someone or something." << endl;
            break;
        default:
            cout << "Invalid case abbreviation. Please enter a valid abbreviation (n, r, d, z, o, m, k)." << endl;
    }

    return 0;
}
