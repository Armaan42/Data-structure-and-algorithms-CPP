#include<iostream>
using namespace std;

void Message(int n){
    
    if(n==0){
        return;
    }
    cout << "Good Morning" << endl;

    Message(n-1);
}

int main(){
    int n;
    cin >> n;

    Message(n);
}