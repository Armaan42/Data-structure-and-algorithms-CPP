// WAP to print the sum of digits of given number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;

    if (n < 0){
        n = -n; 
    }

    while(n > 0){
        int digit = n % 10; 
        sum += digit;       
        n = n / 10;         
    }

    cout << sum << endl;

    return 0;
}