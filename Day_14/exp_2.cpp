//input a string of size n and update all the even positions in the string to character 'a'

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(int i=0; s[i]!='\0'; i++){
        if(i%2==0){
            s[i] = 'a';
        }
    }
    cout << s << endl;
    return 0;
}