#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input a number: ";
    cin >> n;

    cout << (n % 2 == 0 ? 1 : 0) << endl;
    return 0;
}
