#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Input a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end());
    cout << "Reverse string: " << str << endl;
    return 0;
}
