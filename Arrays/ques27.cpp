#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int even = 0, odd = 0;
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Original array: ";
  for (auto &val : arr)
    cout << val << " ";
  cout << endl;
  for (int i = 0; i < n; ++i) {
    if (arr[i] % 2 == 0)
      ++even;
    else
      ++odd;
  }

  cout << "Even count: " << even << ", Odd count: " << odd << endl;
  return 0;
}
