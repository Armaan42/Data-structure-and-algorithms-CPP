#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < size; i++){
        if (arr[i] > max){
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }
    cout << smax << endl;

    return 0;
}