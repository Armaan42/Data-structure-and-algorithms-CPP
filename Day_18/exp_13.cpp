/*
Write a function that counts the number of occurrences of a target in a sorted array in O(log n) time.
*/

#include<iostream>
using namespace std;

int countTarget(int nums, int target){
    int left = 0;
    int right = nums.size()-1;

    int count = 0;
    
    while(left <= right){
        int mid = left + (right - left ) / 2;

        if(nums[mid] == target){
            count++;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int nums[] = {1,2,3,4,4,8,9,10};

    int target = 4;

    int res = countTarget(nums, target);

    if(res == -1){
        cout << "target not found" << endl;
    }
    else{
        cout << res << endl;
    }
}