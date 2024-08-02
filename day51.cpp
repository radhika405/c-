#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[n][n];
    int sumMainDiagonal = 0;
    int sumAntiDiagonal = 0;

    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        sumMainDiagonal += matrix[i][i];
    }

    
    for (int i = 0; i < n; i++) {
        sumAntiDiagonal += matrix[i][n - 1 - i];
    }


    cout << "Sum of the main diagonal elements: " << sumMainDiagonal << endl;
    cout << "Sum of the anti-diagonal elements: " << sumAntiDiagonal << endl;

    return 0;
}
