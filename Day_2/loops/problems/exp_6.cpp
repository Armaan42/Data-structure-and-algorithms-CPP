// WAP to print the sum of series: 1 - 2 + 3 - 4 + 5 - 6 ... upto n-terms

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        if ( i % 2 == 1){
            sum += i;
        }
        else{
            sum -= i;
        }
    }
    cout << sum << endl;

    return 0;

}