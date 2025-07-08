#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Input a word: ";
    cin >> word;

    int n = word.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = word[i];
        word[i] = word[n - 1 - i];
        word[n - 1 - i] = temp;
    }

    cout << "Reverse word: " << word << endl;
    return 0;
}
