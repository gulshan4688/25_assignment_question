#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array:";
    for (auto &val : arr)
    cout << val << " ";
    cout << endl;
    int minSum = INT32_MAX;
    int num1 = 0, num2 = 0;

    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    cout << "Pair with sum closest to zero: (" << num1 << ", " << num2 << "), Sum = " << minSum << endl;
    return 0;
}
