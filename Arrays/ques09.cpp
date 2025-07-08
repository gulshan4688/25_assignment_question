#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int pos = 2;      // position where to insert (0-based index)
    int value = 25;   // value to insert
    cout << "Array before inserting " << value << " at index " << pos << ": ";
    for (int val : arr) cout << val << " ";
    cout << endl;
    // Increase size by one (push dummy value)
    arr.push_back(0); // space for the new element

    // Shift elements from the end to the right
    for (int i = arr.size() - 1; i > pos; --i) {
        arr[i] = arr[i - 1];
    }
    cout<<endl;

    // Insert the new element at the desired position
    arr[pos] = value;

    // Output
    cout << "Array after inserting " << value << " at index " << pos << ": ";
    for (int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
