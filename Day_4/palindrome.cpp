#include<iostream>
using namespace std;

int main(){
    string name;
    cin >> name;

    string reverse_name = "";

    for(int i=name.size()-1; i>=0; i--){
        reverse_name += name[i];
    }

    if (name == reverse_name){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }
    return 0;
}