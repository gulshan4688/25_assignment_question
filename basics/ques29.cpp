#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string hex;
    cout << "Enter Hexadecimal Number: ";
    cin >> hex;

    int decimal;
    sscanf(hex.c_str(), "%x", &decimal);

    string binary = bitset<32>(decimal).to_string();
    binary = binary.substr(binary.find('1'));

    cout << "Equivalent Binary Number is: " << binary << endl;
    return 0;
}
