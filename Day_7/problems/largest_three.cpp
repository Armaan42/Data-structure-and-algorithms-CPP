#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){

    vector<int> v{1,4,5,23,8,9,11,4};

    int first_max = INT_MIN;
    int second_max = INT_MIN;
    int third_max = INT_MIN;

    for(int i=0; i<v.size(); i++){
        if(v[i] > first_max){
            third_max = second_max;
            second_max = first_max;
            first_max = v[i];
        }
        else if(v[i] > second_max && v[i] != first_max){
            third_max = second_max;
            second_max = v[i];
        }
        else if(v[i] > third_max && v[i] != first_max && v[i] != second_max){
            third_max = v[i];
        }
    }
    
    cout << "First largest: " << first_max << endl;
    cout << "Second largest: " <<  second_max << endl;
    cout << "Third largest: " << third_max << endl;

    return 0;
}