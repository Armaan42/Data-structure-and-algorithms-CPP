#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin , str);

    int n = str.length();

    reverse(str.begin() + 0, str.begin() + n/2);
    cout << str << endl;

    return  0;
}