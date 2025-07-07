// Given an array, predict if the array contains duplicates or not.

#include<iostream>
using namespace std;

bool containsDuplicates(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                cout << "Duplicate found: " << arr[i] 
                     << " at positions " << i << " and " << j << endl;
                return true;
            }
        }
    }
    cout << "No duplicates found" << endl;
    return false;
}

int main() {
    int arr[] = {1, 2, 6, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if (!containsDuplicates(arr, size)) {
        cout << "All elements are unique" << endl;
    }
    
    return 0;
}