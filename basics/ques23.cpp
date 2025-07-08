#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string binary = "1101";
    int decimal = stoi(binary, 0, 2);
    stringstream ss;
    ss << hex << uppercase << decimal;
    cout << "HexaDecimal value: " << ss.str();
    return 0;
}
