#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 50, 20, 90, 40};
    int maxVal = arr[0], minVal = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    cout << "Max: " << maxVal << ", Min: " << minVal << endl;
    return 0;
}
