#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 9; i++) {
        if (i % 2 == 0)
            cout << "* * * * * * ==================================\n";
        else
            cout << " * * * * *  ==================================\n";
    }
    for (int i = 0; i < 6; i++)
        cout << "==============================================\n";
    return 0;
}
