// Write a program to calculate the sum of the first n natural numbers using arithmetic operators.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    cout << "The sum of the first " << n << " natural numbers is " << sum << endl;
}