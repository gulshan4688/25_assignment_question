#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int sum = 0;

    for (int val : arr) sum += val;

    cout << "Sum of array: " << sum << endl;
    return 0;
}
