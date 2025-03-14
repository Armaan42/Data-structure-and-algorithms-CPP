#include<iostream>
using namespace std;

int main(){
    // Declare an integer variable 'x' and initialize it with the value 4
    int x = 4;

    // Declare a pointer 'p' and assign it the address of 'x'
    int *p = &x;

    // Print the value of 'p', which is the address of 'x'
    cout << p << endl;

    // Print the address of 'x' directly using the address-of operator '&'
    cout << &x << endl;

    // Print the address of the pointer 'p' itself
    cout << &p << endl;

    return 0;
}