#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    ifstream file(filename, ios::binary | ios::ate);
    if (!file) {
        cout << "File not found.\n";
        return 1;
    }

    streamsize size = file.tellg();
    file.close();

    cout << filename << " : " << size << " bytes" << endl;
    return 0;
}
