/*
Question: Implement a function int integerSquareRoot(int n) that calculates the integer square root of a non-negative integer n using binary search, without using sqrt().
*/

#include<iostream>
using namespace std;

int intergerSquareRoot(int n){
    if(n < 0){
        return -1;
    }

    if(n == 0 || n == 1){
        return n;
    }

    int a = 0;

    if(n > 0){
        int ans = 1;

        while(ans * ans <= n){
            ans = ans * 2;
        }
        a = ans - 1;
    }
    return a;
}

int main(){
    int n;
    cin >> n;

    int result = intergerSquareRoot(n);

    if(result == -1){
        cout << "number is less than 1";
    }
    else{
        cout << result << endl;
    }
}