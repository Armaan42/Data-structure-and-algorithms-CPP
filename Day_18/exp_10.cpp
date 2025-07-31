/*
You are given a 2D matrix where each row is sorted from left to right, and the first integer of each row is greater than the last integer of the previous row. Write an efficient function to search for a target value in this matrix.
*/

#include <iostream>
#include <vector> 
using namespace std;

pair<int, int> findTarget(int nums[3][3], int target) {
    int rows = 3;
    int cols = 3;
    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midElem = nums[mid / cols][mid % cols];

        if (midElem == target) {
            return {mid / cols, mid % cols}; 
        }
        else if (midElem < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return {-1, -1}; 
}

int main() {
    int nums[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target;
    cout << "Enter target value: ";
    cin >> target;

    pair<int, int> result = findTarget(nums, target);

    if (result.first != -1) {
        cout << "Target found at: (" 
             << result.first << ", " << result.second << ")" << endl;
    }
    else {
        cout << "Element not found." << endl;
    }
    return 0;
}