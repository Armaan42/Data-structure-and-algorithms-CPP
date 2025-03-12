// WAP to count the digits of a given number

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int count  = 0;

    if ( n == 0){
        cout << "1" << endl;
        
    }
    else{
        
        while(n>0){
            n /= 10;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}