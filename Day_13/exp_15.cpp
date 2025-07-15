// Given n string consisting of digits from 0 to 9. Return the index of string which has maximum 
// value ( 0-based indexing )

#include<iostream>
#include<string>
using namespace std;

int main(){
    string arr[] = {"0123", "3024", "009924", "0243"};
    int max = stoi(arr[0]);

    string maxS;

    for(int i=1; i<sizeof(arr)/sizeof(arr[0]); i++){
        int x = stoi(arr[i]);

        if(x>max){
            max = x;
            maxS = arr[i];
        }
    }

    cout << max << endl;
    cout << maxS << endl;

    return 0;
}