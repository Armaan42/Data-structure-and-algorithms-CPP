#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cin >> size;
    
    vector<int> v(size);

    for(int i=0; i<size; i++){
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    for(int i=0; i<size; i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}