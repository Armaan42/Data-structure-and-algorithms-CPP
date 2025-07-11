// built-in string functions

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "hello";
    cout << s.size() << endl;
    cout << s.length() << endl;

    cout << s << endl;
    s.push_back('j');
    cout << s << endl;

    s.pop_back();
    s.pop_back();
    cout <<s << endl;
    cout << endl;

    string a = "abc";
    cout << a + "bas" << endl;
    cout << "xyz" + a << endl;

    reverse(a.begin(), a.end());
    cout << a << endl;

    return 0;
}