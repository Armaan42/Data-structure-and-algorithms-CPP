// WAP to check whether a character is an alphabet or not.

#include<iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if ((c > 65 && c < 90) || (c > 97 && c < 122)) {
        cout << "The character is an alphabet." << endl;
    }
    else{
        cout << "The character is not an alphabet." << endl;
    }

    return 0;
}