// search a character

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char target;  
    getline(cin, s);
    
    cin >> target;
    bool flag = false;

    for(int i = 0; i < s.length(); i++) {  
        if(s[i] == target) {
            flag = true;
            break;  
        }
    }

    if(flag) {
        cout << "Character '" << target << "' found in the string." << endl;
    } else {
        cout << "Character '" << target << "' not found in the string." << endl;
    }

    return 0;
}