#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 2, 3, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (auto &val : arr)
    cout << val << " ";
  cout << endl;
    int candidate = arr[0], count = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] == candidate) count++;
        else {
            count--;
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    // Verify
    int freq = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == candidate) freq++;

    cout << "Majority Candidate: " << candidate << ", Frequency: " << freq << endl;
    if (freq > n/2)
        cout << "Majority Element = " << candidate << endl;
    else
        cout << "No Majority Element" << endl;

    return 0;
}
