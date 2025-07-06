#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cout << "Input number: ";
    cin >> n;

    string nn = n + n;
    string nnn = n + n + n;

    int result = stoi(n) + stoi(nn) + stoi(nnn);
    cout << n << " + " << nn << " + " << nnn << " = " << result << endl;
    return 0;
}
