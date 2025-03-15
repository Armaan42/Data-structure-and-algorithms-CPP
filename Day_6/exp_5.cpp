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
    int n;
    cin >> n;

    for(int i=0; i<size; i++){
        if (arr[i] > n){
            count++;
        }
    }
    cout << count << endl;
    
}