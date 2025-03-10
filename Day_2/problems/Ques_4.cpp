// Write a program to swap two numbers using a temporary variable.

#include<iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The numbers before swapping are: " << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "The numbers after swapping are: " << a << " " << b << endl;

    return 0;
}