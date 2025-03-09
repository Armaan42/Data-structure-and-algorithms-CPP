// Write a C++ program that takes a string input from the user (e.g., "123.45") 
// and converts it to a float. Handle invalid inputs (e.g., "abc") gracefully using try-catch blocks.

#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    string a;
    cin >> a;
    
    cout<< "Before conversion: " << typeid(a).name() << endl;

    float b = stof(a);
    cout << b << endl;
    cout << "After conversion: " << typeid(b).name() << endl;
}