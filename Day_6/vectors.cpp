#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;

    arr.push_back(6);
    // cout << arr.size() << endl;

    arr.push_back(9);
    // cout << arr.size() << endl;

    arr.push_back(3);
    // cout << arr.size() << endl;

    // cout << arr.capacity() << endl;

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.pop_back();

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}