#include <iostream>
using namespace std;

int main() {
    cout << "Divided by 3:\n";
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 != 0) cout << i << ", ";
    }

    cout << "\n\nDivided by 5:\n";
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0 && i % 3 != 0) cout << i << ", ";
    }

    cout << "\n\nDivided by 3 & 5:\n";
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) cout << i << ", ";
    }
    cout << endl;

    return 0;
}
