#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 77, 33, 65};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool found65 = false, found77 = false;

    cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
        if (arr[i] == 65) found65 = true;
        if (arr[i] == 77) found77 = true;
    }

    cout << "\nFound 65: " << (found65 ? "Yes" : "No") << ", Found 77: " << (found77 ? "Yes" : "No") << endl;
    cout << "Result: " << ((found65 && found77) ? "true" : "false") << endl;

    return 0;
}
