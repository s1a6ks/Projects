#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <string>

using namespace std;

struct AEROFLOT {
    string destination;
    string departureTime;
};

void inputFlights(AEROFLOT flights[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "Enter destination for flight " << i + 1 << ": ";
        cin.ignore();
        getline(cin, flights[i].destination);
        cout << "Enter departure time for flight " << i + 1 << ": ";
        getline(cin, flights[i].departureTime);
    }
}

void sortFlightsByDepartureTime(AEROFLOT flights[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (flights[j].departureTime > flights[j + 1].departureTime) {
                swap(flights[j], flights[j + 1]);
            }
        }
    }
}

void displayFlightsToDestination(const AEROFLOT flights[], int count, const string& destination) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (flights[i].destination == destination) {
            cout << "Flight to " << destination << " departs at " << flights[i].departureTime << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No flights to " << destination << " found." << endl;
    }
}



void lab01_task() {
    double X, Y, Z;

    cout << "enter X: ";
    cin >> X;

    cout << "enter Y: ";
    cin >> Y;

    cout << "enter Z: ";
    cin >> Z;

    double suma = X + Y + Z;
    double dobutok = X * Y * Z;
    double serednie_geom = cbrt(abs(X) * abs(Y) * abs(Z));

    cout << "suma: " << suma << endl;
    cout << "dobotok: " << dobutok << endl;
    cout << "seredne geometrichne " << serednie_geom << endl;
}

void lab02_task() {
    double V1, V2, A, T;
    cout << "Enter the initial velocity of the first car (km/h): ";
    cin >> V1;
    cout << "Enter the initial velocity of the second car (km/h): ";
    cin >> V2;
    cout << "Enter the acceleration (km/s^2): ";
    cin >> A;
    cout << "Enter the time (hours): ";
    cin >> T;

    V1 /= 3600;
    V2 /= 3600;

    double D = (V1 + V2) * T + 0.5 * A * pow(T, 2);

    cout << "The distance between the cars after " << T << " hours is " << D << " kilometers." << endl;
}

void lab03_task() {
    double s,t,v;
    cout << "enter speed" << endl;
    cin >> s;
    cout << "enter time" << endl;
    cin >> t;

    v = s / t; 

    double v1 = v * 60; 

    if(v1 <= 60)
        cout << "the driver did not break the rules: " << v1 << " km/h";
    else
        cout<< "\nthe driver broke the rules :"<< v1 << " km/h";
}

void lab04_task() {
   int n;
    cout << "enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 2; i <= 2 * n; i += 2) {
        sum += i;
    }

    cout << "sum: " << sum << endl; 
}

void lab05_task() {
    char firstVariable, secondVariable;

    cin >> firstVariable;
    cin >> secondVariable;

    char *ptr_firstV = &firstVariable;
    char *ptr_secondV = &secondVariable;

    char temp = *ptr_firstV;
    *ptr_firstV = *ptr_secondV;
    *ptr_secondV = temp;

    cout << "first variable = " << firstVariable << "\n";
    cout << "second variable = " << secondVariable;
}

void lab06_task() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int firstMas[99];
    int secondMas[99];

    for (int i = 0; i < 100; ++i)
    {
        firstMas[i] = rand() % 100;
        secondMas[i] = rand() % 100;
    }


    cout << "_________________before_____________________"
         << "\n";

    for (int i = 0; i < 100; i++)
    {
        cout << "firstMasElem[" << i << "]"
             << " = " << firstMas[i] << "\t\t"
             << "secondMasElem[" << i << "]"
             << " = " << secondMas[i] << "\n";
    }

    for (int i = 0; i < 100; i++)
    {
        firstMas[i] = firstMas[i] + secondMas[i];
        secondMas[i] = firstMas[i] - secondMas[i];
        firstMas[i] = firstMas[i] - secondMas[i];
    }

    cout << "_________________after_____________________"
         << "\n";

    for (int i = 0; i < 100; i++)
    {
        cout << "firstMasElem[" << i << "]"
             << " = " << firstMas[i] << "\t\t"
             << "secondMasElem[" << i << "]"
             << " = " << secondMas[i] << "\n";
    }

}

void lab07_task() {
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
}

void lab08_task() {
    AEROFLOT flights[6];

    cout << "Enter information for 6 flights:" << endl;
    inputFlights(flights, 6);

    sortFlightsByDepartureTime(flights, 6);

    string searchCity;
    cout << "Enter destination city: ";
    cin.ignore();
    getline(cin, searchCity);

    displayFlightsToDestination(flights, 6, searchCity);
}


int main() {
    int lab_number;

    cout << "Select the laboratory work number (1-8): ";
    cin >> lab_number;

    switch (lab_number) {
        case 1:
            lab01_task();
            break;
        case 2:
            lab02_task();
            break;
        case 3:
            lab03_task();
            break;
        case 4:
            lab04_task();
            break;    
        case 5:
            lab05_task();
            break;
        case 6:
            lab06_task();
            break;
        case 7:
            lab07_task();
            break;
        case 8:
            lab08_task();
            break;
        default:
            std::cout << "Incorrect laboratory work number." << std::endl;
            break;
    }

    return 0;
}
