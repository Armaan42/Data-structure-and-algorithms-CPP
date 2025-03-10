// Add a section to the program to check if a number is positive, negative, or zero using relational operators.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0){
        cout << "The number is positive." << endl;
    }else if (n < 0){
        cout << "The number is negative." << endl;
    }else if(n == 0){
        cout << "The number is zero." << endl;
    }else{
        cout << "Invalid input" << endl;
    }

    return 0;
}