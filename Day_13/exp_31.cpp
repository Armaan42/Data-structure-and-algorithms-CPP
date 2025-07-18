// Find the Earliest Repeating Character

#include<iostream>
#include<string>
using namespace std;

string firstRepeatingCharacter(string &s){
    int n = s.length();

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(s[i] == s[j]){
                string res = "";
                res += s[i];
                return res;
            }
        }
    }
    return "-1";
}

int main(){
    string s;
    getline(cin, s);
    
    cout << firstRepeatingCharacter(s) << endl;
}