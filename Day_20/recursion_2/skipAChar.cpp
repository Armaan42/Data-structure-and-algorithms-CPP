/*
Skip a character

Remove all the occurrences of 'a' from the string
*/

#include<iostream>
#include<string>
using namespace std;

void removeChar(string result, string original){
    if(original.length() == 0){
        cout << result;return;
    }

    char ch = original[0];
    if(ch == 'a'){
        removeChar(result, original.substr(1));
    }
    else{
        removeChar(result+ch, original.substr(1));
    }
}

int main(){
    string str = "abacdddca";
    string s;

    removeChar("", str);

}