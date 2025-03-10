// Take 3 number input and tell if they can be sides of the triangle

#include<iostream>
using namespace std;

int main(){

    int a, b , c;
    cout << "Enter the three sides of triangle: ";
    cin >> a >> b >> c;

    if ( (a + b > c) && (a + c > b) && (b + c > a)){
        cout << "Triangle" << endl;
    }
    else{
        cout << "Not a Triangle" << endl;
    }
    return 0;

}