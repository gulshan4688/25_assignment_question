#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {5, 1, 9, 3, 7};
  cout << "Original array: ";
  for (auto &val : arr)
    cout << val << " ";
  cout << endl;
  int smallest = INT32_MAX, second = INT32_MAX;

  for (int val : arr) {
    if (val < smallest) {
      second = smallest;
      smallest = val;
    } else if (val < second && val != smallest) {
      second = val;
    }
  }

  cout << "Second smallest: " << second << endl;
  return 0;
}
