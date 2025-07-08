#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, -1, 0, -2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTarget Sum: " << target << "\nQuadruplets: ";

    for (int i = 0; i < n - 3; i++)
        for (int j = i + 1; j < n - 2; j++)
            for (int k = j + 1; k < n - 1; k++)
                for (int l = k + 1; l < n; l++)
                    if (arr[i] + arr[j] + arr[k] + arr[l] == target)
                        cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ", " << arr[l] << ") ";

    cout << endl;
    return 0;
}
