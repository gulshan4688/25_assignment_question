#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 9, 1, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0, maxVal = arr[0], minVal = arr[0];

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    
    cout<<"maxVal:"<<maxVal<<endl<<"maxVal:"<<minVal<<endl;
    float avg = (float)(sum - maxVal - minVal) / (n - 2);
    cout << "Average excluding max and min: " << avg << endl;
    return 0;
}
