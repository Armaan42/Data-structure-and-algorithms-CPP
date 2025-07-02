#include<iostream>
#include<vector>   
using namespace std;

int main(){

    int size;
    cin >> size;

    vector<int> v;

    bool flag = true;

    for(int i=0; i<size; i++){
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    for(int i=0; i<size; i++){
        if(v[i] > v[i+1]){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }

    return 0;
}