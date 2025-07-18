// First non-repeating character of given string

#include<iostream>
#include<string>
using namespace std;

//METHOD - 1

// char firstNonRepeatingCharacter(string &s){
//     int n = s.length();

//     for(int i=0; i<n; i++){
//         bool found = false;

//         for(int j=0; j<n; j++){
//             if(i != j && s[i] == s[j]){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
//             return s[i];
//         }
//     }
//     return '$';
// }

// int main(){
//     string s;
//     getline(cin, s);
    
//     cout << firstNonRepeatingCharacter(s) << endl;
// }


//METHOD - 2

char firstNonRepeatingCharacter(string &s){
    int freq[256] = {0};

    int n = s.length();

    for(int i=0; i<n; i++){
        char c = s[i];
        freq[(int)c]++;
    }

    for(int i=0; i<n; i++){
        char c = s[i];
        if(freq[(int)c] == 1){
            return c;
        }
    }

    return '$';
}

int main(){
    string s;
    getline(cin ,s);

    cout << firstNonRepeatingCharacter(s) << endl;
}