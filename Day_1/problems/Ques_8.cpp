// Write a C++ program that converts an amount in USD (US Dollars) to EUR (Euros). 
// Take the USD amount as input from the user and use a fixed exchange rate (e.g., 1 USD = 0.85 EUR). 
// Print the result with 2 decimal places.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double usd;
    cin >> usd;

    double eur = usd * 0.92;
    cout << fixed << setprecision(2) <<  eur << endl;

    return 0;
}