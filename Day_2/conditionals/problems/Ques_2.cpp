// Take postive integer input and tell if it is three digit number or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    if (n > 0){
        cin >> n;
        if (n >= 100 && n <= 999){
            cout << "The number is a three digit number." << endl;
        }else{
            cout << "The number is not a three digit number." << endl;
        }
    }
    
    return 0;
}