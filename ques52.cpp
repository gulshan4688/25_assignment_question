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

    bool result = (a + b == c);
    cout << "The result is: " << boolalpha << result << endl;

    return 0;
}
