#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str = "John is   a good boy";
    stringstream ss(str);

    string temp;

    while(ss >> temp){
        cout << temp << endl;
    }
}