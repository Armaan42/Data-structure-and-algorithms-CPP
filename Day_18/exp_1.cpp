/*
Write a C++ function int findLast(const std::vector<int>& nums, int target) that finds the last index of target in a vector. If the target is not found, return -1. A simple linear scan from the end is sufficient.
*/

#include<iostream>
#include<vector>
using namespace std;

int findLast(const vector<int> &nums, int target){
    for(int i=nums.size()-1; i>=0; i--){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5,4,3,2,1};

    int target = 2;

    int result = findLast(nums, target);

    if(result == -1){
        cout << "Target not found" << endl;
    }
    else{
        cout << "Target found at " << result << endl;
    }

    return 0;
}