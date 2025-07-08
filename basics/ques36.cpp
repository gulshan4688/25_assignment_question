#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    const double RADIUS = 6371.01;

    cout << "Input the latitude of coordinate 1: ";
    cin >> x1;
    cout << "Input the longitude of coordinate 1: ";
    cin >> y1;
    cout << "Input the latitude of coordinate 2: ";
    cin >> x2;
    cout << "Input the longitude of coordinate 2: ";
    cin >> y2;

    // Convert degrees to radians
    x1 = x1 * M_PI / 180;
    y1 = y1 * M_PI / 180;
    x2 = x2 * M_PI / 180;
    y2 = y2 * M_PI / 180;

    double distance = RADIUS * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));
    cout << "The distance between those points is: " << distance << " km" << endl;
    return 0;
}
