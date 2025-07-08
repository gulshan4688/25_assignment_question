#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {1, 0, 2, 0, 3, 0, 4};
  int n = arr.size();
  int index = 0;
  cout << "Original array: ";
  for (auto &val : arr) {
    cout << val << " ";
  }
  cout << endl;
  for (int i = 0; i < n; ++i) {
    if (arr[i] != 0) {
      arr[index] = arr[i];
      index++;
    }
  }

  while (index < n)
    arr[index++] = 0;

  cout << "Array after moving zeros: ";
  for (int x : arr)
    cout << x << " ";
  cout << endl;

  return 0;
}
