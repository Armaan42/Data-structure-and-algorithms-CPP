/*
check if an array can be partitioned into 2 continous arrays of equal sum

    ALGORITHM
    arr = {1,2,3,4,5,6,7,8,9};
    prefixSum = {1,3,6,10,15,21,28,36,45}

    int n = arr.size();

    0 to x = x+1 to n-1;
    prefixSum[x] = prefixSum[n-1] + prefixSum[x+1-1];
    prefixSum[x] = prefixSum[n-1] + prefixSum[x];
    2 * prefixSum[x] = prefixSum[n-1];
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,5,10};

    int n = sizeof(arr)/sizeof(arr[0]);

    //formation of prefix sum
    for(int i=1; i<n; i++){
        arr[i] += arr[i-1]; 
    }

    int idx = -1;

    // check if any x exists
    for(int i=1; i<n; i++){
        if(2*arr[i] == arr[n-1]){
            idx = i;
            break;
        }
    }

    if(idx != -1){
        cout << "Yes it can be partitioned at " << idx << endl;
    }
    else{
        cout << "No it cannot be partitioned" << endl;
    }
}