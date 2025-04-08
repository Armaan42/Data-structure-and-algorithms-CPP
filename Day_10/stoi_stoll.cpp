#include<iostream>
#include<string>
using namespace std;

int main(){

    //stoi
    string str = "123456789";
    int x = stoi(str);
    cout << x << endl;
    cout << x + 1 << endl;

    //stoll
    string str1 = "12345678910123";
    long long x2 = stoll(str1);
    cout << x2 << endl;
}