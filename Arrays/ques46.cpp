#include <iostream>
using namespace std;

int main() {
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 16;

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTarget Sum: " << target << endl;

    int pivot;
    for (pivot = 0; pivot < n - 1; pivot++)
        if (arr[pivot] > arr[pivot + 1])
            break;

    int l = (pivot + 1) % n;
    int r = pivot;

    bool found = false;
    while (l != r) {
        int sum = arr[l] + arr[r];
        if (sum == target) {
            cout << "Pair found: (" << arr[l] << ", " << arr[r] << ")" << endl;
            found = true;
            break;
        }
        if (sum < target)
            l = (l + 1) % n;
        else
            r = (n + r - 1) % n;
    }

    if (!found)
        cout << "No such pair found.\n";

    return 0;
}
