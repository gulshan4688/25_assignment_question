#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // missing 3
    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    cout << "Original array: ";
  for (auto &val : arr)
    cout << val << " ";
  cout << endl;
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        sum += arr[i];
    }

    cout << "Missing number is: " << total - sum << endl;
    return 0;
}
