#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int count = 0;

    for(int i=0; i<size; i++){
        if (arr[i] > 5){
            count++;
        }
    }
    cout << count << endl;
    
}