// Write a program to calculate the area of a circle using the formula area = π * r * r.

#include<iostream>
using namespace std;

int main(){
    double r;
    cout << "Enter the radius: ";
    cin >> r;

    double area = 3.14159 * r * r;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}