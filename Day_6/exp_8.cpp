#include <iostream>
#include <vector>
using namespace std;

void two_sum(vector<int> &a, int x){
    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            if (a[i] + a[j] == x){
                cout << i << " " << j << endl;
            }
        }
    }
}

int main() {
    int size, element, x;
    cin >> size; 

    vector<int> v; 

    for (int i = 0; i < size; i++) { 
        cin >> element;  
        v.push_back(element); 
    }

    cin >> x;

    two_sum(v, x);
}
