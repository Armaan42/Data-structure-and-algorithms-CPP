// Write a C++ program that performs arithmetic operations (addition, subtraction, 
//multiplication, division) on two numbers: one int and one float. Print the result as a float

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    float b;
    cin >> b;

    float c = a + b;
    float d = a - b;
    float e = a * b;
    float f = a / b;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
}