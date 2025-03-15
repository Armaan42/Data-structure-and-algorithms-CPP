#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool isAscending = true;
    bool isDescending = true;

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAscending = false;
        }
        if (arr[i] < arr[i + 1]) {
            isDescending = false;
        }
    }

    if (isAscending) {
        cout << "Array is sorted in ascending order" << endl;
    } else if (isDescending) {
        cout << "Array is sorted in descending order" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
