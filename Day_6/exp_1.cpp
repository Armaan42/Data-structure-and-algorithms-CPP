#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    for(int i=0; i<size; i++){
        if (arr[i] < 35){
            cout << i << " ";
        }
    }
    cout << endl;
}