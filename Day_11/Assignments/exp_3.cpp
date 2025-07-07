// Find the minimum value out of all elements in the array.

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[5] = {3,4,-4,7,8};

    int min = INT_MAX;

    for(int i=0; i<5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}