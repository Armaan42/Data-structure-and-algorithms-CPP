// input a string and return the number of times the neighbouring characters are different from each other

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    int count = 0;
    int n = str.length(); 

    for(int i=0; i<n; i++){
        // case 4
        if(n==1){
            break;
        }

        // case 1
        if(i==0){
            if(str[i] != str[i+1]){
                count++;
            }
        }

        // case 2
        else if(i == (n-1)){
            if(str[i] != str[i-1]){
                count++;
            }
        }

        // case 3
        else if(str[i] != str[i+1] && str[i] != str[i-1]){
            count++;
        }
    }
    cout << count << endl;
}