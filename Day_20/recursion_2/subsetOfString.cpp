/*
print subset of the string
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printSubset(string ans, string original){
    if(original == ""){
        cout << ans << endl;
        return;
    }

    char ch = original[0];
    printSubset(ans+ch, original.substr(1));
    printSubset(ans, original.substr(1));
}

void storeSubset(string ans, string original, vector<string>& s){
    if(original == ""){
        s.push_back(ans);
        return;
    }

    char ch = original[0];
    storeSubset(ans+ch, original.substr(1), s);
    storeSubset(ans, original.substr(1), s);
}

int main(){
    string str = "abc";
    // printSubset("", str);
    
    vector<string> s;
    storeSubset("", str, s);
    
    for(string ele : s){
        cout << ele << endl;
    }
}