#include<iostream>
using namespace std;

int main(){
    // Declare an integer variable 'x' and initialize it with the value 10
    int x = 10;

    // Declare a pointer 'p' and assign it the address of 'x'
    int *p = &x;

    // Dereference the pointer 'p' to access the value stored at the address it points to (which is 'x')
    cout << *p << endl;

    return 0;
}