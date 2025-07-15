// longest common prefix

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    int n = v.size();

    sort(v.begin(), v.end());

    string first = v[0];
    string last = v[n-1];

    string str = "";

    for(int i=0; i<first.length(); i++){
        if(first[i] == last[i]){
            str += first[i];
        }
        else{
            break;
        }
    }
    cout << str << endl;

    return 0;
}