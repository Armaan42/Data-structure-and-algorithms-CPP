#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5, 10);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}