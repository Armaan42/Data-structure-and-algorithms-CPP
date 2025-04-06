#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    sort(str.begin(), str.end()); //sort always follow the ascii values
    cout << str << endl;
    return 0;
}