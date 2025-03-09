// Write a C++ program that prints the size (in bytes) of the following data types: 
// int, short int, long int, float, double, char, and bool. Use the sizeof operator.

#include<iostream>
using namespace std;

int main(){
    cout << "int: " << sizeof(int) << endl;
    cout << "short int: " << sizeof(short int) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;
}