/*
stair path:
Take either 1 or 2 step and their combination
*/


#include<iostream>
using namespace std;

// formula = stair(n) = stair(n-1) + stair(n-2)

int stair(int n){
    if(n==2){
        return 2;
    }

    if(n==1){
        return 1;
    }
    return stair(n-1) + stair(n-2);
}

int main(){
    cout << stair(5) << endl;
}
