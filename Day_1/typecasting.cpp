// Type Casting in C++
// Type casting in C++ allows you to convert a variable from one data type to another. There are two types of type casting:

// 1. Implicit Type Casting (Automatic Conversion)
// 2. Explicit Type Casting (Manual Conversion)

#include <iostream>
#include <string>

#include <iomanip> // for setting precision or limit the value after decimal

using namespace std;

int main() {
    string numStr = "123";
    string floatStr = "3.14159";
    string longStr = "9223372036854775807";

    // Integer conversions
    int num = stoi(numStr);
    long longNum = stol(longStr);
    long long longLongNum = stoll(longStr);

    // Floating-point conversions
    float fnum = stof(floatStr);
    double dnum = stod(floatStr);
    long double ldnum = stold(floatStr);

    // Output
    cout << "stoi: " << num << endl;
    cout << "stol: " << longNum << endl;
    cout << "stoll: " << longLongNum << endl;
    cout << "stof: " << fnum << endl;
    cout << "stod: " << dnum << endl;
    cout << "stold: " << ldnum << endl;
    cout << endl;


    //setting precision
    double a = 7.23423423;
    cout << fixed << setprecision(2) << a << endl; // here the precisio is 2

    return 0;
}