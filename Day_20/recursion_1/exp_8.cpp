/*
make a function which calculates 'a' raised to the power 'b' using recursion
*/

#include<iostream>
using namespace std;

int powerAToB(int a, int b){
    if(b==0){
        return 1;
    }

    return a * powerAToB(a, b-1);
}

int main(){
    cout << powerAToB(2,5) << endl;
}