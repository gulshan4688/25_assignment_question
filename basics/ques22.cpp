#include <iostream>
using namespace std;
int main()
{
    int binary = 100;
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    cout << "Decimal Number: " << decimal;
    return 0;
}
