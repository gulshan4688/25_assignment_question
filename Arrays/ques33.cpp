#include <iostream>
using namespace std;

int main() {
    int arr[] = {20, 20, 30, 40, 50, 50, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";

    // Shift unique elements to front
    int newLen = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[newLen - 1]) {
            arr[newLen] = arr[i];
            newLen++;
        }
    }

    cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < newLen; ++i) cout << arr[i] << " ";
    cout << "\nNew Length: " << newLen << endl;

    return 0;
}
