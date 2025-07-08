#include <iostream>
using namespace std;

int main() {
    int rows = 2, cols = 3;
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int C[2][3];

    // Calculate C = A + B
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            C[i][j] = A[i][j] + B[i][j];

    // Print Matrix A
    cout << "Matrix A:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }

    // Print Matrix B
    cout << "\nMatrix B:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << B[i][j] << " ";
        cout << endl;
    }

    // Print Matrix C (Sum)
    cout << "\nSum of matrices (Matrix C = A + B):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
