#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int size){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        // int mid = ( left + right ) / 2;
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin >> target;

    int idx = binarySearch(arr, target, size);

    if(idx == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index " << idx << endl;
    }
    return 0;
}