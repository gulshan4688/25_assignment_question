#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 8, 2, 7, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort array (bubble sort)
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    int result[n];
    int l = 0, r = n - 1, k = 0;
    while (l <= r) {
        if (k % 2 == 0)
            result[k++] = arr[r--];
        else
            result[k++] = arr[l++];
    }

    cout << "\nMax-Min Pattern: ";
    for (int i = 0; i < n; i++) cout << result[i] << " ";
    cout << endl;
    return 0;
}
