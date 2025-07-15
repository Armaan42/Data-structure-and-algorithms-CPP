// check for palindrome

#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string &s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        if(s[left] != s[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main(){
    string s = "racecar";

    if(checkPalindrome(s)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }
}