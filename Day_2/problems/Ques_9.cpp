// Write a program to calculate the sum of the digits of a number using arithmetic operators.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    cout << "The sum of the digits is " << sum << endl;

    return 0;
}