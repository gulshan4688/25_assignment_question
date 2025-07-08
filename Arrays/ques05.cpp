#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int key = 30;
    bool found = false;

    for (int val : arr) {
        if (val == key) {
            found = true;
            break;
        }
    }

    cout <<"The key: "<<key<<" has been "<< (found ? "Found" : "Not found") << endl;
    return 0;
}
