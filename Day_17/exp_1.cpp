// given an array check whether it is sorted or not

#include<iostream>
using namespace std;

bool checkIfSortedOrNot(int arr[], int n){
    bool flag = true;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int arr[] = {5,1,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(checkIfSortedOrNot(arr, n)){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
