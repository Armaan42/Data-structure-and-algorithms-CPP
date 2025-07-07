/*
Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if(i % 2 == 1){
            arr[i] = arr[i] * 2;
        }
        else{
            arr[i] += 10;
        }
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}