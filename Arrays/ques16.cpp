#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
  int n = arr.size();
  cout << "Original array1: ";
  for (auto &val : arr)
    cout << val << " ";
  cout << endl;
  cout << "Array after removing duplicates: ";

  for (int i = 0; i < n; ++i) {
    bool isDuplicate = false;
    for (int j = 0; j < i; ++j) {
      if (arr[i] == arr[j]) {
        isDuplicate = true;
        break;
      }
    }
    if (!isDuplicate)
      cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
