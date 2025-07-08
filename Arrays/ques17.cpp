#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 1, 9, 3, 7};
    cout << "Original array1: ";
  for (auto &val : arr)
  cout << val << " ";
  cout << endl;
    int largest = INT32_MIN, second = INT32_MIN;

    for (int val : arr) {
        if (val > largest) {
            second = largest;
            largest = val;
        } else if (val > second && val != largest) {
            second = val;
        }
    }

    cout << "Second largest: " << second << endl;
    return 0;
}
