#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {3,0,1};
    int  n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    int actualSum = n*(n+1)/2;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout << actualSum - sum << endl;
}