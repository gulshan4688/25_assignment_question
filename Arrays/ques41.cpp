#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    int first = INT32_MAX, second = INT32_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "\nSmallest = " << first << ", Second Smallest = " << second << endl;
    return 0;
}
