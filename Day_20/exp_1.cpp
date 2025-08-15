/*
capacity to ship packages within D days
*/

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int weight[] = {3,2,2,4,1,4};
    int days = 3;

    int max = INT_MIN;

    int sum = 0;
    for(int i=0; i<sizeof(weight)/sizeof(weight[0]); i++){
        sum = sum + weight[i];
    }

    int lo = max;
    int hi = sum;
    int minCapacity = sum;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;

        if(check(mid, weight, dayss)){
            midCapacity = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout << minCapacity;

}