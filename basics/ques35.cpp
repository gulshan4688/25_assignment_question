#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double s;
    cout << "Input the number of sides on the polygon: ";
    cin >> n;
    cout << "Input the length of one of the sides: ";
    cin >> s;

    double area = (n * s * s) / (4 * tan(M_PI / n));
    cout << "The area is: " << area << endl;
    return 0;
}
