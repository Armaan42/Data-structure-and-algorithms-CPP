#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    sort(str2.begin(), str2.end());
    

    if (str1 == str2){
        cout << "Anagram" << endl;
    }
    else{
        cout << "Not a Anagram" << endl;
    }
    return 0;
}