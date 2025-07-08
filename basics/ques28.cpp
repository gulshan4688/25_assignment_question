#include <iostream>
using namespace std;

int main() {
    string hex;
    cout << "Input a hexadecimal number: ";
    cin >> hex;
    int decimal;
    sscanf(hex.c_str(), "%x", &decimal);

    cout << "Equivalent decimal number is: " << decimal << endl;
    return 0;
}
