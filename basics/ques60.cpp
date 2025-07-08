#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string line;
    cout << "Input a String: ";
    cin.ignore();
    getline(cin, line);

    stringstream ss(line);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    if (words.size() >= 2) {
        cout << "Penultimate word: " << words[words.size() - 2] << endl;
    } else {
        cout << "Not enough words." << endl;
    }

    return 0;
}
