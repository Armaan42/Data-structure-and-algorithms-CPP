/*
find the max value in the array
*/

#include<iostream>
#include<limits.h>
using namespace std;

void printMax(int arr[], int n, int idx, int max){
    if(idx == n){
        cout << max << endl;return;
    }
    if(max < arr[idx]){
        max = arr[idx];
    }

    printMax(arr, n, idx+1, max);
}

int main(){
    int arr[] = {1,3,5,3,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int a = INT_MIN;

    printMax(arr, n, 0, a);
}