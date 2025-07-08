#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> arr1 = {"apple", "banana", "cherry"};
    vector<string> arr2 = {"banana", "date", "cherry"};

    cout << "Common elements: ";
    for (int i = 0; i < arr1.size(); ++i) {
        for (int j = 0; j < arr2.size(); ++j) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    cout << endl;
    return 0;
}
