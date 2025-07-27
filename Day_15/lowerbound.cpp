#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,7,8,13,17,19,25};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 12;

    for(int i=0; i<size; i++){
        if(arr[i] > x){
            cout << arr[i-1] << endl; break;
        }
    }
}