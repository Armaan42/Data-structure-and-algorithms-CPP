//Write a C++ program to find the largest numerical value in 
//an array of strings, where each string represents a number 
//(possibly with leading zeros). The program should also output 
//the string representation of the largest number.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string arr[] = {"0123", "0023", "456", "00182", "940", "002901"};

    int max = stoi(arr[0]);
    string maxs = arr[0];

    for(int i=1; i<=5; i++){
        int x = stoi(arr[i]);
        if (x > max){
            max = x;
            maxs = arr[i];
        }
    }
    cout << max << endl;
    cout << maxs << endl;
    return ;
}