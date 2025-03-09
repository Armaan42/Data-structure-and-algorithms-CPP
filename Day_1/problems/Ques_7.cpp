// Write a C++ program that converts a temperature from Celsius to Fahrenheit. 
// Take the Celsius value as input from the user and print the result as a floating-point number with 2 decimal places.

#include<iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main(){
    double temp;
    cin >> temp;

    int choice;
    cin >> choice;

    cout << "1. Celsius To Fahrenheit" << endl;
    cout << "2. Fahrenheit To Celsius" << endl;

    if (choice == 1){
        cout << celsiusToFahrenheit(temp) << " F" << endl;
    }
    else if (choice == 2){
        cout << fahrenheitToCelsius(temp) << " C" << endl;
    }
    else{
        cout << "Invalid choice" << endl;
    }

    return 0;
}