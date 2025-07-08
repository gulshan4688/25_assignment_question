#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, 5, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool valid = true;
     cout << "Original array: ";
  for (auto &val : arr)
    cout << val << " ";
  cout << endl;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0 || arr[i] == -1) {
            valid = false;
            break;
        }
    }

    cout << (valid ? "Array excludes 0 and -1" : "Array contains 0 or -1") << endl;
    return 0;
}
