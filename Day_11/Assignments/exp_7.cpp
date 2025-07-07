// WAP to find the largest three elements in the array.

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[] = {1,4,5,2,9,8};

    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > max){
            tmax = smax;
            smax = max;
            max = arr[i];
        }
        else if(arr[i] > smax){
            tmax = smax;
            smax = arr[i];
        }
        else if(arr[i] > tmax){
            tmax = arr[i];
        }
    }

    cout << "Third max : " << tmax << endl;
    cout << "Second max : " << smax << endl;
    cout << "max : " << max << endl;

    return 0;
}