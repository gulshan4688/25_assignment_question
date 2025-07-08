#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double s;
    cout << "Input the length of a side of the hexagon: ";
    cin >> s;
    double area = (6 * s * s) / (4 * tan(M_PI / 6));
    cout << "The area of the hexagon is: " << area << endl;
    return 0;
}
