#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string binary = "111";
    int decimal = stoi(binary, 0, 2);
    stringstream ss;
    ss << oct << decimal;
    cout << "Octal number: " << ss.str();
    return 0;
}
