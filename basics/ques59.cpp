#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Input a String: ";
    cin.ignore(); // flush newline
    getline(cin, str);

    for (char &ch : str) {
        if(ch >='A' && ch<='Z') ch=ch+32;
    }

    cout << str << endl;
    return 0;
}
