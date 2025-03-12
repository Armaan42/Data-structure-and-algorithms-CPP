// WAP to print odd number from 1 to n;

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if (i % 2 == 1){
            cout << i << " ";
        }
    }cout << endl;
    return 0;
}