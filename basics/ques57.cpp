#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Input an integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
