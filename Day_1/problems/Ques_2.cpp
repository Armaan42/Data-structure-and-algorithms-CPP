// Write a C++ program that takes a floating-point number as input from the user and prints it with a precision of 3 decimal places. 
// Use fixed and setprecision from the <iomanip> library.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a;
    cin >> a;

    cout<< fixed << setprecision(3) << a << endl;
}