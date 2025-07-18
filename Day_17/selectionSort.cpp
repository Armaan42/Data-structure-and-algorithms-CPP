// selection sort

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    
    // Traverse the array
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in the unsorted part
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    vector<int> arr = {29, 10, 14, 37, 13};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    selectionSort(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}