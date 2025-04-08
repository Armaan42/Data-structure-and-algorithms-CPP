#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
#include<math.h>
using namespace std;

int main(){
    string str = "John x x x x x doe is good boy, And he is a also a mentor";

    stringstream ss(str);

    string temp;

    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
    
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }

    sort(v.begin(), v.end());
      
    cout << endl;

    int maxcount = 1;
    int count = 1;

    for(int i=1; i<v.size(); i++){
        if (v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        maxcount = max(maxcount, count);
    }
    // cout << maxcount << endl;

    count = 1;

    for(int i=1; i<v.size(); i++){
        if (v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count == maxcount){
            cout << v[i] <<" " << maxcount << endl;
        }
    }
    return 0;
}