#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 3, 5, 6, -1};
    int target = 5;
    cout << "Original array: ";
  for (auto &val : arr)
    cout << val << " ";
  cout << endl;
    cout << "Pairs with sum " << target << ": ";
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ") ";
            }
        }
    }

    cout << endl;
    return 0;
}
