// check if two strings are same

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    getline(cin ,s1);
    getline(cin ,s2);

    if(s1 == s2){
        cout << "strings are same" << endl;
    }
    else{
        cout << "strings are not same" << endl;
    }
    return 0;
}