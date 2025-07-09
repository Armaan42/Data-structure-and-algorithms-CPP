// replace a characeter at a position

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin ,s);

    char ch;
    cin >> ch;

    int pos;
    cin >> pos;

    if(pos >= 0 && pos<=s.length()){
        s.insert(pos,1,ch);
    }
    else{
        cout << "invalid positition" << endl;
    }

    cout << s << endl;

    return 0;
}