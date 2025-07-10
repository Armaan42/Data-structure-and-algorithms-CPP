// insert a character at Multiple Positions

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    char ch;
    cout << "Enter character to insert: ";
    cin >> ch;

    cout << "Enter positions to insert (space-separated, end with -1): ";
    vector<int> pos;
    int temp;
    while (cin >> temp && temp != -1) {
        pos.push_back(temp);
    }

    for (int i = pos.size()-1; i >= 0; i--) {
        if (pos[i] >= 0 && pos[i] <= s.length()) {
            s.insert(pos[i], 1, ch);
        }
    }

    cout << "Result: " << s << endl;
    return 0;
}