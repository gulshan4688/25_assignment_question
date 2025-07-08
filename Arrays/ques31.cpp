#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 10, 10, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sumOfTens = 0;

    cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] == 10) sumOfTens += arr[i];
    }

    cout << "\nSum of 10s = " << sumOfTens << endl;
    cout << "Result: " << (sumOfTens == 30 ? "true" : "false") << endl;

    return 0;
}
