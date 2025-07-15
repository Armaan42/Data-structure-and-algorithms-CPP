// Given two strings s and t, return true if t is an anagram of s, otherwise return false

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());   

    if (s == t){
        cout << true << endl;
    }
    else{
        cout << false << endl;
    }

    return 0;
}