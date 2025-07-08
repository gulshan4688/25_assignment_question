#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 5, 1, 6};
    cout << "Duplicate values: ";
    
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] == arr[j]) {
                // Check if already printed
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
