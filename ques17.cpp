#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a = 0b10, b = 0b11;
    int sum = a + b;
    cout << "Sum of two binary numbers: " << bitset<8>(sum).to_string().substr(bitset<8>(sum).to_string().find('1')) << endl;
    return 0;
}
