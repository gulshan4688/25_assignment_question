#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> original = {1, 2, 3, 4};
    vector<int> copy;

    for (int val : original) {
        copy.push_back(val);
    }

    cout << "Copied array: ";
    for (int val : copy) cout << val << " ";
    cout << endl;
    return 0;
}
