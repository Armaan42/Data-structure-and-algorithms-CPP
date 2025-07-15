// check for Anagrams

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkAnagrams(string &s1, string &s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2){
        return true;
    }
    return false;
}

int main(){
    string s1 = "abc";
    string s2 = "cba";

    if(checkAnagrams(s1, s2)){
        cout << "Anagrams" << endl;
    }
    else{
        cout << "Not a Anagrams" << endl;
    }
}