// WAP to print the nth fibnoacci number: 0 1 1 2 3 5 8 13

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int prev = 0;
    int curr = 1;
    
    cout << prev << " " << curr << " ";

    for(int i=0; i<n-1; i++){

        int sum = prev + curr;
        prev = curr;
        curr = sum;
    
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}