#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Checking Java Installation...\n" << endl;

    // Try running the Java version command
    int status = system("java -version");

    if (status != 0) {
        cout << "\nJava is not installed or not set in system PATH." << endl;
    }

    return 0;
}
