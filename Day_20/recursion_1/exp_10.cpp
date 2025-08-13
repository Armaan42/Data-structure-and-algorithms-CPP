/*
power log
*/

#include<iostream>
using namespace std;

int power(int x, int n){
    if(n==1){
        return x;
    }
    int ans = power(x, n/2);
    return ans * ans;
}

int main(){
    cout << power(2,5) << endl;
}