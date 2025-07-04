#include<iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int store[3][2]; // Note: dimensions flipped for transpose

    // Store the transpose
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            store[j][i] = arr[i][j]; // Correct assignment
        }
    }

    // Print the transposed matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << store[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}