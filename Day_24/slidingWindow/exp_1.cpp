// Maximum sum subarray of size k

/*
    n = size of arr
    k = subarray size

    n - k = last window
    9 - 3 = 6 (at index)
*/


#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {7,1,2,5,4,8,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    int maxSum = INT_MIN;

    for(int i=0; i<n-k; i++){
        int sum = 0;
        for(int j=i; j<i+k; j++){
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }

    cout << maxSum << endl;
}