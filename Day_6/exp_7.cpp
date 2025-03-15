#include<iostream>
#include<vector>
using namespace std;

void last_occurences(vector<int> &v, int target){
    int idx = -1;

    for(int i=0; i<v.size(); i++){
        if ( v[i] == target ){
            idx = i;
        }
    }
    cout << idx << endl;
}

int main(){

    int size, element;
    cin >> size;

    vector<int> v(size);
    
    for(int i=0; i<size; i++){  
        cin >> v[i];
    }

    int target;
    cin >> target;

    last_occurences(v, target);

    return 0;
}