#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> arr = {"apple", "banana", "apple", "cherry", "banana", "date"};

    cout << "Duplicate strings: ";
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] == arr[j]) {
                bool alreadyPrinted = false;
                for (int k = 0; k < i; ++k)
                    if (arr[k] == arr[i]) alreadyPrinted = true;

                if (!alreadyPrinted) {
                    cout << arr[i] << " ";
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}
