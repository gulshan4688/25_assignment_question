#include <iostream>
using namespace std;

int main() {
    int seconds;
    cout << "Input seconds: ";
    cin >> seconds;

    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
