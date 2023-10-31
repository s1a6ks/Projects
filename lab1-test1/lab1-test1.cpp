#include <iostream>
#include <cmath>

using namespace std;

int main() {
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

    return 0;
}
