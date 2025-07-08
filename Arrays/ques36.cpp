#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 0, 5, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    cout << "Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\nTarget: " << target << "\nTriplets: ";

    for (int i = 0; i < n-2; ++i) {
        for (int j = i+1; j < n-1; ++j) {
            for (int k = j+1; k < n; ++k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == target) {
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ") ";
                }
            }
        }
    }

    cout << endl;
    return 0;
}
