#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 6, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    // Sort array manually (bubble sort)
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

    int count = 0;

    for (int i = n - 1; i >= 1; i--) {
        int left = 0, right = i - 1;
        while (left < right) {
            if (arr[left] + arr[right] > arr[i]) {
                count += right - left;
                right--;
            } else {
                left++;
            }
        }
    }

    cout << "\nTotal possible triangles: " << count << endl;
    return 0;
}
