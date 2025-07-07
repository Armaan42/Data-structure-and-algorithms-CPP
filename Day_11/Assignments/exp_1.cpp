// Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int prod = 1;
    for(int i=0; i<5; i++){
        prod = prod * arr[i];
    }
    cout << prod << endl;
    return 0;
}