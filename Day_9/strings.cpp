#include<iostream>
using namespace std;

int main(){
    char str[] = {'a', 'b', 'c', 'd', 'e'};

    for(int i=0; i<sizeof(str)/sizeof(str[0]); i++){
        cout << str[i] << " ";
    }cout << endl;
}