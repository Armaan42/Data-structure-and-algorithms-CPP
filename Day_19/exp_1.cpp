/*
peak index in mountain array
*/

#include<iostream>
#include<iostream>
using namespace std;

// method 1 - O(n)
// int main(){
//     int arr[] = {1, 3, 5, 4, 3, 2, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int idx = -1;

//     for(int i = 1; i < n - 1; i++){
//         if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
//             idx = i;
//             break;
//         }
//     }
//     cout << "Peak index: " << idx << endl;
//     return 0;
// }

//method 2 - O(log(n))

int peakIndexInMountainArray(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while(left < right){
        int mid = left + (right - left) / 2;

        if(arr[mid] < arr[mid + 1]){
            // You're in the ascending part
            left = mid + 1;
        } else {
            // You're in the descending part
            right = mid;
        }
    }

    // left == right -> peak index
    return left;
}

int main() {
    int arr[] = {1, 3, 5, 7, 6, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int peakIndex = peakIndexInMountainArray(arr, n);
    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak value: " << arr[peakIndex] << endl;

    return 0;
}