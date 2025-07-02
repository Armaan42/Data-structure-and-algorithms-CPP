#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    vector<int> v = {-3,9,-4,-9,4,3,-4};

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    int next_negative = 0;

    for(int i=0; i<v.size(); i++){
        if(v[i] < 0){
            swap(v[i], v[next_negative]);
            next_negative++;
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }   

    return 0;
}