#include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";

    cout << "\nLeaders: ";
    int maxFromRight = arr[n-1];
    cout << maxFromRight << " ";

    for (int i = n-2; i >= 0; --i) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            cout << maxFromRight << " ";
        }
    }

    cout << endl;
    return 0;
}
