#include<iostream>
#include<string>
using namespace std;

void checking_vowels(string chk){
    int vowel_count = 0;
    for(int i = 0; i < chk.length(); i++) {
        char c = tolower(chk[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel_count++;
        }
    }
    cout << "Number of vowels: " << vowel_count << endl;
}

int main(){
    string chk;
    getline(cin, chk);
    checking_vowels(chk);
    return 0;
}