#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 9, 1, 5, 7};
    int maxVal = arr[0], minVal = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    cout<<"maxVal:"<<maxVal<<endl<<"maxVal:"<<minVal<<endl;
    cout << "Difference: " << maxVal - minVal << endl;
    return 0;
}
