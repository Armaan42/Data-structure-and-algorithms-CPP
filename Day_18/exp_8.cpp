/*
Write a function that takes a sorted std::vector<int> which may contain duplicates, and finds the first and last index of a given target. The function should return a std::pair<int, int> and have a time complexity of O(log n).
*/

#include<iostream>
#include<vector>
using namespace std;

pair<int, int> findDuplicates(vector<int> &nums, int target){
    int first, second = -1;
    int n = nums.size();

    for(int i=0; i<n; i++){
        if(nums[i] == target){
            first = i;
            break;
        }
    }

    for(int j = n-1; j>=0; j--){
        if(nums[j] == target){
            second = j;
            break;
        }
    }

    return {first, second};
}

int main(){
    vector<int> nums = {1,2,3,1,4,5};

    int target = 1;
    pair<int, int> result = findDuplicates(nums, target);

    cout << result.first;
    cout << endl;
    cout << result.second;
    cout << endl;

    return 0;
}