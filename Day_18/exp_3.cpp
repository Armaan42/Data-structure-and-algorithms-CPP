/*
Implement a function bool isSorted(const std::vector<int>& nums) that checks if a vector is sorted in non-decreasing order. This is a crucial pre-condition check before running a binary search.
*/

#include<iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int> &nums){

    if(nums.empty() || nums.size() == 1){
        return true;
    }

    int n = nums.size() - 1;

    for(int i=0; i<n; i++){
        if(nums[i] > nums[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums = {1,2,3,4,5};

    if(isSorted(nums)){
        cout << "vector is sorted in non-decreasing order" << endl;
    }
    else{
        cout << "vector is not sorted in non-decreasing order" << endl;
    }
}