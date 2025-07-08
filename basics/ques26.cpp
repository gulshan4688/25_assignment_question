#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    string octal;
    cout << "Input any octal number: ";
    cin >> octal;

    int decimal = 0;
    for (char c : octal) {
        decimal = decimal * 8 + (c - '0');
    }

    string binary = bitset<32>(decimal).to_string();
    binary = binary.substr(binary.find('1'));
    cout << "Equivalent binary number: " << binary << endl;
    return 0;
}
