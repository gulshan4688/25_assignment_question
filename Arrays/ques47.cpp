#include <iostream>
using namespace std;

int main() {
    int arr[] = {15, 18, 2, 3, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    int minIndex = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[minIndex])
            minIndex = i;

    cout << "\nRotation Count: " << minIndex << endl;
    return 0;
}
