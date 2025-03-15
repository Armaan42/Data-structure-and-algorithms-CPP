#include<iostream>
using namespace std;

void display(int a[], int size){
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void change(int b[]){
    b[0] = 100;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    display(arr, size);
    change(arr);
    display(arr, size);
    
}