#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,0,1,1,1,0,0,0,1,0,1,0,1,0,0};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    int noz = 0;
    int noo = 0;

    for(int i=0; i<v.size(); i++){
        if ( v[i] == 0 ){
            noz++;
        }
        else{
            noo++;
        }
    }

    // cout << noz << " " << noo << endl;

    for(int i=0; i<v.size(); i++){
        if ( i<noz ){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}