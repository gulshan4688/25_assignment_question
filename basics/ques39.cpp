#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            for (int k = 1; k <= 4; k++) {
                if (i != j && j != k && i != k) {
                    cout << i << j << k << endl;
                    count++;
                }
            }
        }
    }
    cout << "Total number of the three-digit-number is " << count << endl;
    return 0;
}
