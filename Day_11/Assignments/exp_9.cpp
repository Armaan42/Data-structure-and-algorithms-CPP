// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int evenSum = 0;
    int oddSum = 0;

    for(int i=0; i<size; i++){
        if(i % 2 == 0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }

    cout << evenSum - oddSum << endl;

    return 0;
}