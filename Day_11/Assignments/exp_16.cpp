// // Write a program to print the column number having the maximum sum in a given matrix.

#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    int maxSum = INT_MIN;
    int maxCol = -1;

    for(int j=0; j<3; j++){
        int colSum = 0;
        for(int i=0; i<3; i++){
            colSum += arr[i][j];
        }

        if(colSum > maxSum){
            maxSum = colSum;
            maxCol = j;
        }
    }

    cout << maxSum << endl;
    cout << maxCol << endl;

    return 0;
}