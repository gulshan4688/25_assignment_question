#include <iostream>
using namespace std;

int main() {
    int arr[] = {49, 1, 3, 200, 2, 4, 70, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Manual sort (bubble sort)
    for (int i = 0; i < n-1; ++i)
        for (int j = 0; j < n-1-i; ++j)
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";

    int maxLen = 1, currLen = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i-1]) continue;
        else if (arr[i] == arr[i-1] + 1) currLen++;
        else currLen = 1;

        if (currLen > maxLen) maxLen = currLen;
    }

    cout << "\nLongest consecutive sequence length: " << maxLen << endl;

    return 0;
}
