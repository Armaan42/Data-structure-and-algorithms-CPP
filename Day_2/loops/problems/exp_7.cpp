// WAP to print the factorial of given number

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int fact = 1;

    if (n == 0 || n == 1){
        cout << "1" << endl;
    }

    else{
        for(int i=1; i<=n; i++){
            fact = fact * i;
        }
        cout << fact << endl;
    }

    return 0;
}