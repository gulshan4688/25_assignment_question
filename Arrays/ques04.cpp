#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int val : arr) sum += val;
    double avg = (double)sum / arr.size();

    cout << "Average: " << avg << endl;
    return 0;
}
