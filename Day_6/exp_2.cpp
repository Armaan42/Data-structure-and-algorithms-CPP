#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int product = 1;

    for(int i=0; i<size; i++){
        product *= arr[i];
    }
    cout << product << endl;
}