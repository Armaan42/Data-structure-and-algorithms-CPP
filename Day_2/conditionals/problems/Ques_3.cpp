// Take positive integer input and tell if it is divisible by 5 and 3.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";

    if (n > 0){
        cin >> n;

        if (n % 5 == 0 && n % 3 == 0){
            cout << "The number is divisible by 5 and 3." << endl;
        }else{
            cout << "The number is not divisible by 5 and 3." << endl;
        }
    }
    return 0;
}