// Count the number of elements strictly greater than x.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,6,4,2,6,4,99,2,5,2};

    int x, count=0;
    cin >> x;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] > x){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}