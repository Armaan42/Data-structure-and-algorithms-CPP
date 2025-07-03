#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[2][2] = {{1,99},{6,4}};

    int max = INT_MIN;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout << max << endl;

    return 0;
}