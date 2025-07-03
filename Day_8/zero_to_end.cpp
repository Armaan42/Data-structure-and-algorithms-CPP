#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v{1,0,1,1,0,1,0,1};

    int noz = 0;
    int noo = 0;

    for(int i=0; i<v.size(); i++){
        if(v[i] == 0){
            noz++;
        }
        else{
            noo++;
        }
    }

    for(int i=0; i<v.size(); i++){
        if(i<noz){
            v[i] = 1;
        }
        else{
            v[i] = 0;
        }
    }

    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}