#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

int main(){
    vector<int> v;

    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);

    // v.at(2) = 90;
    // cout << v[2] << endl;

    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;

    return 0;
}