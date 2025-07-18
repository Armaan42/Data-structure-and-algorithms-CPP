// URLify a given string (Replace spaces with %20)

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "hello ji kya haal hain ?";
    int n = s.length();

    string a = "";

    for(int i=0; i<n; i++){
        if(s[i] == ' '){
            a += "%20";
        }
        else{
            a += s[i];
        }
    }

    cout << a << endl;
    return 0;
}