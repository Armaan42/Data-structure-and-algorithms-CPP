#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,2,3,4};
    int *ptr = arr;

    // int *ptr = &arr[0];

    // cout << ptr << endl;
    // cout << &arr[0] << endl;

    // cout << ptr[0] << endl;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << ptr[i] << " ";
    }
    cout << endl;

    ptr[0] = 10;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cout << ptr[i] << " ";
    }
    cout << endl;

} 