#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,3,2,4,3,5};
    int len = arr.size();

    int i = 0;
    while(i < len){
        int correctIdx = arr[i];
        if(arr[correctIdx] == arr[i]){
            cout <<  arr[i] << endl;
            break;
        }
        else{
            swap(arr[correctIdx], arr[i]);
        }
    }
    i++;

}