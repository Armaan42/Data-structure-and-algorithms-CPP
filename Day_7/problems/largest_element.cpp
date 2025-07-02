#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector<int> v{1,9,5,6,8};

    int max = INT_MIN;

    for(int i=0; i<v.size(); i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    cout << max << endl;
    return 0;
}