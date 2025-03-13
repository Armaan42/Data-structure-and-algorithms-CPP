// WAP to compute the greatest common divisor of two given numbers

#include<iostream>
#include<numeric>
using namespace std;

int main(){
    
    int a, b;
    cin >> a >> b;

    cout << "GCD: " << gcd(a, b) << endl;
    cout << "LCM: " << (a * b) / gcd(a, b) << endl;

    return 0;
}