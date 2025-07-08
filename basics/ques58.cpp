#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    cout << "Input a Sentence: ";
    cin.ignore(); // flush newline
    getline(cin, sentence);

    bool cap = true;
    for (char &ch : sentence) {
        if (isspace(ch)) {
            cap = true;
        } else if (cap) {
            ch = toupper(ch);
            cap = false;
        } else {
            ch = tolower(ch);
        }
    }

    cout << sentence << endl;
    return 0;
}
