// Write a program to print the elements of both the diagonals in a square matrix.

#include<iostream>
using namespace std;

int main(){

    int row, col;
    cin >> row >> col;

    int arr[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for(int i=0; i<row; i++){
        cout << arr[i][i] << " ";
    }cout << endl;

    for(int i=0; i<row; i++){
        cout << arr[i][row-i] << " ";
    }cout << endl;

    return 0;
}