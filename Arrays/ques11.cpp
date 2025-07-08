#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array: ";
    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
