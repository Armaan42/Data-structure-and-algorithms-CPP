// Check if the given array is sorted or not

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,5,4};

    bool flag = true;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]) - 1; i++){
        if(arr[i+1] < arr[i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "sorted" << endl;
    }
    else{
        cout << "not sorted" << endl;
    }

    return 0;
}