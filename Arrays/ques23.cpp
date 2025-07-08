#include <iostream>
using namespace std;

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  bool isEqual = true;
  cout << "Original array1: ";
  for (auto &val : arr1)
    cout << val << " ";
  cout << endl;
  cout << "Original array2: ";
  for (auto &val : arr2)
    cout << val << " ";
  cout << endl;
  for (int i = 0; i < n; ++i) {
    if (arr1[i] != arr2[i]) {
      isEqual = false;
      break;
    }
  }

  cout << "Arrays are " << (isEqual ? "equal" : "not equal") << endl;
  return 0;
}
