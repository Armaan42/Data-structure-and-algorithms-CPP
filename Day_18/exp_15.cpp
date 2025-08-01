/*
Given a sorted array of non-negative distinct integers, find the smallest missing non-negative integer in it.
*/

#include<iostream>
using namespace std;

int main() {
    int arr[] = {0,1,2,3,4,8,9,12};

    int n = 8;
    for(int i=0; i<n; i++){
        if(i != arr[i]){
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}