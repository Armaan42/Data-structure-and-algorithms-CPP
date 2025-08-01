/*
sqrt(x)
*/

#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int left = 0;
    int right = x;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(mid * mid == x){
            cout << mid << endl;
            return 0;
        }
        else if(mid * mid < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
}