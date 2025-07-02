#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &a){
    for(auto i : a){
        cout << i << " ";
    }
}

void reversePart(int i, int j, vector<int> &v){
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    display(v);

    int k = 3;
    int n = v.size();

    // if(k>n){
    //     k = k - n;
    // }

    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0, n-1, v);

    cout << endl;

    display(v);

    return 0;
}