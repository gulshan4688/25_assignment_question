#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    string octalStr;
    cout << "Input an octal number: ";
    cin >> octalStr;

    int decimal = 0;
    for (char c : octalStr) {
        decimal = decimal * 8 + (c - '0');
    }

    stringstream ss;
    ss << hex << uppercase << decimal;

    cout << "Equivalent hexadecimal number: " << ss.str() << endl;

    return 0;
}
