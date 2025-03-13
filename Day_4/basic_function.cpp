// greeting person which his/her name

#include<iostream>
using namespace std;

void greeting(string name){
    cout << "Hello " + name << endl;
}

int main(){
    string name;
    // cin >> name;
    getline(cin, name);

    greeting(name);
}