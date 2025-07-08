#include <iostream>
#include <vector>
#include <string>
using namespace std;

void sortArray(vector<int>& arr) {
    for (int i = 0; i < arr.size()-1; ++i) {
        for (int j = i+1; j < arr.size(); ++j) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void sortStrings(vector<string>& arr) {
    for (int i = 0; i < arr.size()-1; ++i) {
        for (int j = i+1; j < arr.size(); ++j) {
            if (arr[j] < arr[i]) {
                string temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main() {
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    vector<string> strs = {"Banana", "Apple", "Mango", "Cherry"};

    sortArray(nums);
    sortStrings(strs);

    cout << "Sorted numbers: ";
    for (int num : nums) cout << num << " ";
    cout << "\nSorted strings: ";
    for (string s : strs) cout << s << " ";
    cout << endl;
    return 0;
}
