#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){
    string str;
    getline(cin, str);

    reverse(str.begin() + 2, str.begin() + 5);
    cout << str << endl;
}