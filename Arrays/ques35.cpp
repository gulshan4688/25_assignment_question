#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    cout << "Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\nTarget: " << target << "\nPairs: ";

    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (arr[i] + arr[j] == target)
                cout << "(" << arr[i] << ", " << arr[j] << ") ";

    cout << endl;
    return 0;
}
