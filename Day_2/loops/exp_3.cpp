// Display the AP: 1,3,5,7,9... upto n terms

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<n; i=i+2){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}