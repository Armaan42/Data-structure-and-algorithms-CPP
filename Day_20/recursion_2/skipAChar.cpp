/*
Skip a character

Remove all the occurrences of 'a' from the string
*/

#include<iostream>
#include<string>
using namespace std;

void removeChar(string result, string original, int idx){
    if(idx == original.length()){
        cout << result << endl;
        return;
    }

    char ch = original[idx];
    if(ch == 'a'){
        removeChar(result, original, idx+1);
    }
    else{
        removeChar(result+ch, original, idx+1);
    }
}

int main(){
    string str = "abacdddca";
    removeChar("", str, 0);

}