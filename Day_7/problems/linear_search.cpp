#include<iostream>
#include<vector>
using namespace std;

vector<int> linearSearch(vector<int> &num, int key, int size){

    vector<int>FoundIndices;

    for(int i=0; i<size; i++){
        if(num[i] == key){
            FoundIndices.push_back(i);
        }
    }
    return FoundIndices;
}

int main(){

    int size;
    cin >> size;

    vector<int> v;

    for(int i=0; i<size; i++){
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    int key;
    cin >> key;

    vector<int> result = linearSearch(v, key, size);
    
    if(result.empty()){
        cout << "Key not found" << endl;
    }
    else{
        cout << "Key found at indices" << endl;
        for(int idx : result){
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}