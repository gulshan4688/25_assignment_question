#include <iostream>
using namespace std;
int main()
{
    int octal = 10, decimal = 0, base = 1;
    while (octal > 0) {
        int lastDigit = octal % 10;
        decimal += lastDigit * base;
        base *= 8;
        octal /= 10;
    }
    cout << "Equivalent decimal number: " << decimal;
    return 0;
}
