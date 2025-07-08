#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Input first integer: ";
    cin >> a;
    cout << "Input second integer: ";
    cin >> b;

    if (a == b) cout << a << " == " << b << endl;
    if (a != b) cout << a << " != " << b << endl;
    if (a < b) cout << a << " < " << b << endl;
    if (a > b) cout << a << " > " << b << endl;
    if (a <= b) cout << a << " <= " << b << endl;
    if (a >= b) cout << a << " >= " << b << endl;

    return 0;
}
