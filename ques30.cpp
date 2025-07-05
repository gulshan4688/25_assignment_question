#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string hex;
    cout << "Input a hexadecimal number: ";
    cin >> hex;

    int decimal;
    sscanf(hex.c_str(), "%x", &decimal);

    stringstream ss;
    ss << oct << decimal;
    cout << "Equivalent of octal number is: " << ss.str() << endl;
    return 0;
}
