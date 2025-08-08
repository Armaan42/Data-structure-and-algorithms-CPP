#include<iostream>
using namespace std;

void fun(int n){

    if(n==0){
        return;
    }

    cout << "I am funny" << endl;

    fun(n-1);
}

int main(){
    fun(5);
}