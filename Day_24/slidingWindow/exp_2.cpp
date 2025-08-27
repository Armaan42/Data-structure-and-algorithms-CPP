// Maximum sum subarray of size k using sliding window algorithm
/*

    int k = 4
    curr window sum = prev window sum + last element of curr window - first element 
                                                                      of prev window

    int currSum = prevSum + arr[j] - arr[i-1]; 

*/

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 4;

    int maxSum = INT_MIN;
    int maxId = -1;

    int prevSum = 0;
    for(int i=0; i<k; i++){
        prevSum += arr[i];
    }
    maxSum = prevSum;

    //sliding window
    int i = 1;
    int j = k;

    while(j < n){
        prevSum = prevSum + arr[j] - arr[i-1];
        
        if(maxSum < prevSum){
            maxSum = prevSum;
            maxId = i;
        }
        i++;
        j++;
    }
    cout << maxSum << endl;
    cout << maxId << endl;

    cout << "subarray: ";
    for(int i=maxId; i<maxId + k; i++){
        cout << arr[i] << " ";
    }cout << endl;
}