#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// vector<int> merge(vector<int> &arr1, vector<int> &arr2){

// }

int main(){
    vector<int> arr1 = {1,4,5,2,3};
    vector<int> arr2 = {7,8,9,3,5};

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> merged(arr1.size() + arr2.size());

    merge(
        arr1.begin(), arr1.end(),
        arr2.begin(), arr2.end(),
        merged.begin()
    );

    for(auto i:merged){
        cout << i << " ";
    }

    return 0;
}