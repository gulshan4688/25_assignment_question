#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    cout << "Current Date time: " << ctime(&now);
    return 0;
}
