#include <iostream>
#include <vector>
using namespace std;

void copy_reverse(vector<int> &v1){

    vector<int> v2(v1.size());

    for(int i=0; i<v1.size(); i++){
        // i + j = v.size() - 1
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
    }

    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
}

int main() {
    int size, element;
    cin >> size; 

    vector<int> v1; 

    for (int i = 0; i < size; i++) { 
        cin >> element;  
        v1.push_back(element); 
    }

    copy_reverse(v1);
}
