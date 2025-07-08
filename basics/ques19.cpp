#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int decimal = 5;
    cout << "Binary number is: " << bitset<8>(decimal).to_string().substr(bitset<8>(decimal).to_string().find('1')) << endl;
    return 0;
}
