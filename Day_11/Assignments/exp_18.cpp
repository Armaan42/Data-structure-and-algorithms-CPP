// Write a program to print the elements of both the diagonals in a square matrix.

#include<iostream>
using namespace std;

int main(){

    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for(int i=0; i<3; i++){
        cout << arr[i][i] << " ";
    }cout << endl;

    for(int i=0; i<3; i++){
        cout << arr[i][2-i] << " ";
    }cout << endl;

    return 0;
}