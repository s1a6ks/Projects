#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double ax, ay, bx, by, cx, cy;

    cout << "Enter the coordinates of vertex A (x, y): ";
    cin >> ax >> ay;
    cout << "Enter the coordinates of vertex B (x, y): ";
    cin >> bx >> by;
    cout << "Enter the coordinates of vertex C (x, y): ";
    cin >> cx >> cy;

    double sideAB = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
    double sideBC = sqrt(pow(cx - bx, 2) + pow(cy - by, 2));
    double sideCA = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

    double cosA = (pow(sideBC, 2) + pow(sideCA, 2) - pow(sideAB, 2)) / (2 * sideBC * sideCA);
    double cosB = (pow(sideCA, 2) + pow(sideAB, 2) - pow(sideBC, 2)) / (2 * sideCA * sideAB);
    double cosC = (pow(sideAB, 2) + pow(sideBC, 2) - pow(sideCA, 2)) / (2 * sideAB * sideBC);

    double angleA = acos(cosA) * 180.0 / M_PI;
    double angleB = acos(cosB) * 180.0 / M_PI;
    double angleC = acos(cosC) * 180.0 / M_PI;

    cout << "Internal angles of the triangle in degrees:" << endl;
    cout << "Angle A: " << angleA << " degrees" << endl;
    cout << "Angle B: " << angleB << " degrees" << endl;
    cout << "Angle C: " << angleC << " degrees" << endl;

    return 0;
}
