#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr1 = {1, 2, 3, 4, 5};
  vector<int> arr2 = {4, 5, 6, 7, 8};
  cout << "Original array1: ";
  for (auto &val : arr1)
  cout << val << " ";
  cout << endl;
  cout << "Original array2: ";
  for (auto &val : arr2)
    cout << val << " ";
  cout << endl;
  cout << "Common integers: ";
  for (int i = 0; i < arr1.size(); ++i) {
    for (int j = 0; j < arr2.size(); ++j) {
      if (arr1[i] == arr2[j]) {
        cout << arr1[i] << " ";
        break;
      }
    }
  }

  cout << endl;
  return 0;
}
