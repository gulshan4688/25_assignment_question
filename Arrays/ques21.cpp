#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int arr[vec.size()];

    for (int i = 0; i < vec.size(); ++i) {
        arr[i] = vec[i];
    }

    cout << "Array: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
