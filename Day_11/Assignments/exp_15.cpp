// Write a program to print the row number having the maximum sum in a given matrix.

#include<iostream>
#include<climits>  
using namespace std;

int main() {
    int arr[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int maxSum = INT_MIN;  
    int maxRow = -1;       

    for(int i = 0; i < 3; i++) {
        int rowSum = 0;  
        for(int j = 0; j < 3; j++) {
            rowSum += arr[i][j];  
        }
        
        if(rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;  
        }
    }

    cout << "Maximum row sum: " << maxSum << endl;
    cout << "Row number with maximum sum: " << maxRow << endl;

    return 0;
}