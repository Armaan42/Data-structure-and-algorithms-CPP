#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5};

    reverse(v.begin(), v.end());

    for(auto i : v){
        cout << i << " ";
    }cout << endl;
    return 0;
}
