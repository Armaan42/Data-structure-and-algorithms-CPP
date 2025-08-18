/*
Calculate greatest common divisor of two numbers
*/

#include<iostream>
using namespace std;

int greatestCommonDivisor(int a, int b){
    for(int i = min(a, b); i>=2; i--){
        if(a%i==0 && b%i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    cout << greatestCommonDivisor(24, 60);
}