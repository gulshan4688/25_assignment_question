#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 10, 15, 20, 25};
    int key = 15;
    int index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    cout << "Index: " << index << endl;
    return 0;
}
