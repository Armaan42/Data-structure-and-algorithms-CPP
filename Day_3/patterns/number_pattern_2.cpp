// print the below pattern

// 1
// 1 2 
// 1 2 3
// 1 2 3 4

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}