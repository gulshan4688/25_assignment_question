#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Input your Password: ";
    cin >> password;  // use cin for simplicity; getline for full line
    cout << "Your password was: " << password << endl;
    return 0;
}
