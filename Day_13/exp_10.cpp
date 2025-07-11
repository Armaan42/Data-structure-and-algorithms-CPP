// check for palindrome

#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left > right){
        if(s[left] != s[right - 1]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);

    if(checkPalindrome(s)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }
    return 0;
}