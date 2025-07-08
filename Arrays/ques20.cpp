#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    vector<int> v;
    for (int i = 0; i < len; ++i) {
        v.push_back(arr[i]);
    }

    cout << "Vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
