// Write a C++ program to find the largest element of a given 2D array of integers.

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

    int max = INT_MIN;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << "Largest element is: " << max << endl;
}