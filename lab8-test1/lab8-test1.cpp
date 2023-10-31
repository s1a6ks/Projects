#include <iostream>
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

int main() {
    AEROFLOT flights[6];

    cout << "Enter information for 6 flights:" << endl;
    inputFlights(flights, 6);

    sortFlightsByDepartureTime(flights, 6);

    string searchCity;
    cout << "Enter destination city: ";
    cin.ignore();
    getline(cin, searchCity);

    displayFlightsToDestination(flights, 6, searchCity);

    return 0;
}
