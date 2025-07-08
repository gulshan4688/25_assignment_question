#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the second number: ";
    cin >> b;
    cout << "Input the third number: ";
    cin >> c;

    bool result = (a % 10 == b % 10) || (b % 10 == c % 10) || (a % 10 == c % 10);
    cout << "The result is: " << boolalpha << result << endl;

    return 0;
}
