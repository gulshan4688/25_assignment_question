#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int target = 20;
    cout << "Before removal: ";
    for (int val : arr) cout << val << " ";
    cout << endl;
    vector<int> result;
    for (int val : arr) {
        if (val != target) result.push_back(val);
    }

    cout << "After removal: ";
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}
