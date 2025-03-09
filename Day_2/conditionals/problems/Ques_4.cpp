// Take 3 positive integer and print greatest of three.

#include<iostream>
using namespace std;

int main(){
    
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0){
        if (a > b && a > c){
            cout << "The greatest number is: " << a << endl;
        }else if (b > a && b > c){
            cout << "The greatest number is: " << b << endl;
        }else{
            cout << "The greatest number is: " << c << endl;
        }
    } else {
        cout << "Please enter positive integers only." << endl;
    }
    return 0;
}