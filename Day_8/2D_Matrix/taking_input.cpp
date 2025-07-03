#include<iostream>
using namespace std;

int main(){ 

    int row, cols;
    cin >> row >> cols;

    int arr[row][cols];

    for(int i=0; i<row; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j]; 
        }
    }

    cout << endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}