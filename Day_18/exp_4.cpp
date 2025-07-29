/*
Write a function int findFirstEven(const std::vector<int>& nums) that returns the first even number it finds. If there are no even numbers, it should return -1.
*/

#include<iostream>
#include<vector>
using namespace std;

int findFirstEven(const vector<int> &nums){
    int n =nums.size() - 1;

    for(int i=0; i<=n; i++){
        if(nums[i] % 2 == 0){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5};

    int result = findFirstEven(nums);
    
    if(result == -1){
        cout << "No even number found" << endl;
    }
    else{
        cout << "Even number found at index " << result << endl;
    }
}