// Add a section to the program to calculate the factorial of a number using a loop and arithmetic operators.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial *= i;
    }
    cout << "The factorial of " << n << " is " << factorial << endl;

    return 0;
}