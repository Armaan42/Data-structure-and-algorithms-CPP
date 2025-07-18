#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> &arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = (left + right ) / 2;

        if(arr[mid] == target){
            return mid;
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

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    // sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}