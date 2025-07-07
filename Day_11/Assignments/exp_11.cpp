/*
Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int count = 0;

    for(int i=0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(i !=j && arr[i] == arr[j]){
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}