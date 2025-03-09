// Write a C++ program that prints the ASCII values of all uppercase letters (A-Z), lowercase letters (a-z), and digits (0-9). 
// Format the output neatly in a table-like structure.

#include<iostream>
using namespace std;

int main(){
    for(char i='A'; i<='Z'; i++){
        cout << int(i) << ": " << i << endl;
    }
    cout << endl;

    for(char j='a'; j<='z'; j++){
        cout << int(j) << ": " << j << endl;
    }
    cout << endl;

    for(char k='0'; k<='9'; k++){
        cout << int(k) << ": " << k << endl;
    }
}