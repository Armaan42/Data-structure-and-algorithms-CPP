#include<iostream>
using namespace std;

int main(){
    // cout << "Enter your age: ";
    // int age;
    // cin >> age;

    //checking if the person is eligible to vote or not.
    // if(age >= 18){
    //     cout << "You are eligible to vote." << endl;
    // }else{
    //     cout << "You are not eligible to vote." << endl;
    // }

    int n;
    cout << "Enter a number: ";
    cin >> n;

    //checking if the number is even or odd.

    // if (n%2 ==0){
    //     cout << "The number is even." << endl;
    // }else{
    //     cout << "The number is odd." << endl;
    // }


    //checking if the number is divisible by 5 or not.
    // if (n % 5 == 0){
    //     cout << "The number is divisible by 5." << endl;
    // }else{
    //     cout << "The number is not divisible by 5." << endl;
    //}

    // print the absolute value of a number
    if (n < 0){
         cout << "The absolute value of the number is: " << -n << endl;
    }
    else{
         cout << "The absolute value of the number is: " << n << endl;
    }
    
    return 0;
}