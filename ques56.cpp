#include <iostream>
using namespace std;

int main() {
    int x, y, p;
    cout << "Enter starting range (x): ";
    cin >> x;
    cout << "Enter ending range (y): ";
    cin >> y;
    cout << "Enter divisor (p): ";
    cin >> p;

    int count = (y / p) - ((x - 1) / p);
    cout << count << endl;

    return 0;
}
