/*
    prefixSum :
    arr = {1,4,5,3,2,7,6}
    prefixarr = {1,5,10,13,22,28}
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,4,5,3,2,7,6};
    int n = arr.size();
    vector<int> sum(n);

    sum[0] = arr[0];

    for(int i=0; i<n; i++){
        sum[i] = arr[i] + sum[i-1];
        cout << sum[i] << " ";
    }
    cout << endl;
}