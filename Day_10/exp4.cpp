#include<iostream>
#include<algorithm>
#include<string>
#include<vector> 
using namespace std;

int main(){
    //method 1
    string str;
    getline(cin, str);

    // int maxcount = 0;
    // char maxchar = '\0'; 
    // int n = str.length();

    // for(int i = 0; i < n; i++){
    //     char ch = str[i];
    //     int count = 0;

    //     for(int j = 0; j < n; j++){
    //         if(str[j] == ch){
    //             count++;
    //         }
    //     }
    //     if (maxcount < count){
    //         maxcount = count;
    //         maxchar = ch; 
    //     }
    // }
    // cout << "Character: " << maxchar << ", Frequency: " << maxcount << endl;


    //method 2
    vector<int> arr(26, 0);

    for(int i=0; i<str.length(); i++){
        char ch = str[i];

        int ascii = (int)ch;
        arr[ascii-97]++;
    }

    int mx = 0;
    for(int i=0; i<26; i++){
        if(arr[i] > mx) mx = arr[i];
    }

    for(int i=0; i<26; i++){
        if(arr[i] == mx){
            int ascii = i + 97;
            char ch = (char) ascii;
            cout << ch << " " << mx << endl;
        }
    }
    return 0;
}