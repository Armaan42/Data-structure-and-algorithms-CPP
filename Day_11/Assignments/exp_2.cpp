// Find the second largest element in the given Array in one pass.

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[5] = {5,6,2,7,8};

    int smax = INT_MIN;
    int max = INT_MIN;

    for(int i=0; i<5; i++){
        if(arr[i] > max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }
    cout << smax << endl;
    return 0;
}