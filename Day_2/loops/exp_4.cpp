// Display this AP: 100, 97, 94...upto all terms which are positive

#include<iostream>
using namespace std;

int main(){
    int count = 0;
    for(int i=100; i>=1; i = i - 3){
        cout << i << " ";
        count++;
    }
    cout << endl;
    cout << count << endl;
    return 0;
}