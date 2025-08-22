#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {3,0,1};
    int  n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(n+1, -1);

    for(int i=0; i<n; i++){
        v[arr[i]] = arr[i];
    }

    for(int i=0; i<v.size(); i++){
        if(v[i] == -1){
            cout << i << " ";
        }
    }
}