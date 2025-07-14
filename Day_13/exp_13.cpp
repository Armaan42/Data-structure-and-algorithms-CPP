// given a string of consisting of lowercase english alphabets. Print the character that is occuring the most number of times.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int max = 0;
    
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int count = 1;

        for(int j=i+1; j<s.length(); j++){
            if(s[j] == s[i]){
                count++;
            }
        }

        if(max < count){
            max = count;
        }
    }
    
    cout << max << endl;

    return 0;
}