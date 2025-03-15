#include<iostream>
using namespace std;

int main(){

    int size;
    cin >> size;

    int arr[size];

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        cin >> arr[i];
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}