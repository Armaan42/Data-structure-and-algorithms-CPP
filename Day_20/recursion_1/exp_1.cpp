#include<iostream>
using namespace std;

void fun(){
    cout << "I am Funny" << endl;
}

void gun(){
    cout << "I am Gunny" << endl;
    fun();
}

int main(){
    gun();
    return 0;
}