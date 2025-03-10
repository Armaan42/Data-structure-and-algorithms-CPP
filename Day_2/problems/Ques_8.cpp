// Add a section to the program to convert a temperature 
// from Celsius to Fahrenheit using the formula F = (C * 9/5) + 32.

#include<iostream>
using namespace std;

int main(){
    double cel;
    cout << "Enter the temperature: ";
    cin >> cel;

    double fah;
    cout << cel * (9/5) + 32 << endl;
    return 0;
}