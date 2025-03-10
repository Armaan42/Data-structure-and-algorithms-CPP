// Write a program to find the largest of three numbers using logical and relational operators.

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c){
        cout << "The greatest number is " << a << endl;
    }
    else if(b > a && b > c){
        cout << "The greatest number is " << b << endl;
    }
    else if(c > a && c > b){
        cout << "The greatest number is " << c << endl;
    }
    else{
        cout << "Invalid Input" << endl;
    }
    
    return 0;
}