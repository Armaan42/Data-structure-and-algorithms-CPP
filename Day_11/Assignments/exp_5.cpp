// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.

#include <iostream>
using namespace std;

int findSmallestMissingPositive(int arr[], int n) {
    int missing = 1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == missing) {
            missing++;
        } else if (arr[i] > missing) {
            return missing;
        }
    }
    
    return missing;
}

int main() {
    int arr[] = {1, 2, 3, 6, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = findSmallestMissingPositive(arr, n);
    cout << "The smallest missing positive element is: " << result << endl;
    
    return 0;
}