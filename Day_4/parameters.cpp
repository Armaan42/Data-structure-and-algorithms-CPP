#include<iostream>
using namespace std;

void func(int a, int b){ // formal parameters
    cout << "Address of function a " << &a << endl;
    cout << "Address of function b " << &b << endl;
}

int main(){
    int a = 3;
    int b = 4;

    cout << "Address of main a " << &a << endl;
    cout << "Address of main b " << &b << endl;
    cout << endl;

    func(a, b); //Actual parameters
}