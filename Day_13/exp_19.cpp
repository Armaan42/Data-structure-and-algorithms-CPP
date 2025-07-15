// check for binary string

#include<iostream>
#include<string>
using namespace std;

bool checkForBinaryString(string &s){
    for(int i=0; i<s.size(); i++){
        if(s[i] != '0' && s[i] != '1'){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "1001010100101";

    if(checkForBinaryString(s)){
        cout << "Binary String" << endl;
    }
    else{
        cout << "Not a Binary string" << endl;
    }
    return 0;
}