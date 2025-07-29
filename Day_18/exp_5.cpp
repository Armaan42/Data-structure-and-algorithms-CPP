/*
Given a std::string, write a function that returns true if it contains a specific character target, and false otherwise, without using any built-in string::find methods.
*/

#include<iostream>
using namespace std;

bool specificTarget(string str, char target){

    for(int i=0; i<str.size(); i++){
        if(str[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    string str;
    getline(cin, str); 

    char target;
    cin >> target;

    if(specificTarget(str, target)){
        cout << "character found" << endl;
    }
    else{
        cout << "character not found" << endl;
    }
}