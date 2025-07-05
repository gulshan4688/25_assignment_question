#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Input string: ";
    getline(cin, str);

    int letters = 0, space = 0, digit = 0, other = 0;
    for (char c : str) {
        if (isalpha(c)) letters++;
        else if (isdigit(c)) digit++;
        else if (isspace(c)) space++;
        else other++;
    }

    cout << "letter: " << letters << endl;
    cout << "space: " << space << endl;
    cout << "number: " << digit << endl;
    cout << "other: " << other << endl;
    return 0;
}
