/*
Given an unsorted std::vector<int>, write a function to count how many elements are strictly greater than a given value x.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,5,3,8,6};
    int target = 4;

    int count = 0;

    for(int i=0; i<=nums.size()-1; i++){
        if(nums[i] > target){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}