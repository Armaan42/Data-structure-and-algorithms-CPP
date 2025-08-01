/*
Given a sorted array of 'n' elements and a target 'x'. Find the first occurrence of 'x' in the array. If 'x' does not exist return -1
*/

#include<iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target){
    int left = 0;
    int right = n - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == target){
            if(mid == 0 || arr[mid-1] != target)
                return mid;
            else
                right = mid - 1;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,3,3,4,5,6,3,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;

    int index = findFirstOccurrence(arr, n, target);
    cout << "First occurrence of " << target << " is at index: " << index << endl;
}