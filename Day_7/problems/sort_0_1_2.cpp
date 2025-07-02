#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int> &v){
    int noo = 0;
    int noz = 0;
    int notw = 0;

    for(int i=0; i<v.size(); i++){
        if(v[i] == 0){
            noo++;
        }
        else if(v[i] == 1){
            noz++;
        }
        else{
            notw++;
        }
    }

    for(int i=0; i<v.size(); i++){
        if(i<noz){
            v[i] = 0;
        }
        else if(i<(noo + noz)){
            v[i] = 1;
        }
        else{
            v[i] = 2;
        }
    }
}

int main(){

    vector<int> v = {0,1,1,0,2,0,1,1,2,2,1,1,0,2,0};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    sort012(v);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}