#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    int left = 0, right = n - 1;
    while (left < right) {
        while (arr[left] == 0 && left < right) left++;
        while (arr[right] == 1 && left < right) right--;
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    cout << "\nSeparated array (0s on left, 1s on right): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
