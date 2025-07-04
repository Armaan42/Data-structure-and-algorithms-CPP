#include <iostream>
using namespace std;

int main() {
    int row_1, col_1;
    cout << "Enter dimensions for matrix 1 (rows columns): ";
    cin >> row_1 >> col_1;

    // Using dynamic allocation (better than VLAs)
    int** arr1 = new int*[row_1];
    for(int i = 0; i < row_1; i++) {
        arr1[i] = new int[col_1];
    }

    cout << "Enter elements for matrix 1:\n";
    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_1; j++) {
            cin >> arr1[i][j];
        }
    }

    int row_2, col_2;
    cout << "Enter dimensions for matrix 2 (rows columns): ";
    cin >> row_2 >> col_2;

    // Check if multiplication is possible
    if(col_1 != row_2) {
        cout << "Matrix multiplication not possible!\n";
        return 0;
    }

    int** arr2 = new int*[row_2];
    for(int i = 0; i < row_2; i++) {
        arr2[i] = new int[col_2];
    }

    cout << "Enter elements for matrix 2:\n";
    for(int i = 0; i < row_2; i++) {
        for(int j = 0; j < col_2; j++) {
            cin >> arr2[i][j];
        }
    }

    // Initialize result matrix with zeros
    int** result = new int*[row_1];
    for(int i = 0; i < row_1; i++) {
        result[i] = new int[col_2];
        for(int j = 0; j < col_2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_2; j++) {
            for(int k = 0; k < col_1; k++) {  // or row_2 since col_1 == row_2
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant Matrix:\n";
    for(int i = 0; i < row_1; i++) {
        for(int j = 0; j < col_2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}