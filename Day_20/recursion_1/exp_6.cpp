/*
print 1 to n
*/

#include<iostream>
using namespace std;

void print1ToN(int i, int n){
    if(i>n){
        return;
    }

    cout << i << endl;
    print1ToN(i+1, n);
}

int main(){
    int n;
    cin >> n;
    
    cout << endl;

    print1ToN(1, n);
}