/*
Given a sorted array, write a function that finds if there exists a pair of elements whose sum is equal to a given target X. An efficient solution is expected (better than O(N²)).
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> findPair(const vector<int> &nums, int target){
    for(int i=0; i<nums.size()-1; i++){
        for(int j=0; j<nums.size()-1; j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

//MEthod 2
pair<int,int> findPair1(const vector<int> &nums, int target){
    for(int i=0; i<nums.size()-1; i++){
        for(int j=0; j<nums.size()-1; j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main(){
    vector<int> nums= {1,2,3,4,5,6};
    // vector<int> ans;

    // ans=findPair(nums,4);
    // for(auto x: ans){
    //     cout<<x<<" ";
    // }
    pair<int,int> ans;

    ans=findPair1(nums,3);
    cout<<ans.first;
    cout<<ans.second;
    return 0;
}