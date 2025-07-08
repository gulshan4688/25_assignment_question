#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool abc = true;
    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the second number: ";
    cin >> b;
    cout << "Input the third number: ";
    cin >> c;

    bool result = (abc) ? (c > b) : (b > a && c > b);
    cout << "The result is: " << boolalpha << result << endl;

    return 0;
}
