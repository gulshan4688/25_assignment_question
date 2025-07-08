#include <iostream>
using namespace std;

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int n = 2;

    cout << "Matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << matrix[i][j] << " ";
        cout << endl;
    }

    cout << "Anti-diagonals:\n";
    for (int d = 0; d < 2*n - 1; ++d) {
        for (int i = 0; i <= d; ++i) {
            int j = d - i;
            if (i < n && j < n)
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
