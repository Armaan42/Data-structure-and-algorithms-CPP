// Write a C++ program that prints the minimum and maximum values for the following data types: int, float, double, and char. 
// Use the numeric_limits class from the <limits> library.

#include<iostream>
#include<limits>
using namespace  std;

int main(){
    cout << "Max Int: " << numeric_limits<int>::max() << endl;
    cout << "Min Int: " << numeric_limits<int>::min() << endl;

    cout << "Max Float: " << numeric_limits<float>::max() << endl;
    cout << "Min Float: " << numeric_limits<float>::min() << endl;

    cout << "Max Double: " << numeric_limits<double>::max() << endl;
    cout << "Min Double: " << numeric_limits<double>::min() << endl;

    cout << "Max char: " << int(numeric_limits<char>::max()) << endl;
    cout << "Min char: " << int(numeric_limits<char>::min()) << endl;

}
