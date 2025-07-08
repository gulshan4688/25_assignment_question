#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Now: ";
    cout << 1900 + ltm->tm_year << "/";
    cout << setw(2) << setfill('0') << 1 + ltm->tm_mon << "/";
    cout << setw(2) << setfill('0') << ltm->tm_mday << " ";
    cout << setw(2) << setfill('0') << ltm->tm_hour << ":";
    cout << setw(2) << setfill('0') << ltm->tm_min << ":";
    cout << setw(2) << setfill('0') << ltm->tm_sec << endl;

    return 0;
}

