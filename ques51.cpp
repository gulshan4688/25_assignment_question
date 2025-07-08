#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Input a number (string): ";
    cin >> input;

    int number = stoi(input); // convert to integer
    cout << "The integer value is: " << number << endl;

    return 0;
}
