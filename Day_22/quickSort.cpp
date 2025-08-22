/*
quick sort
*/

#include<iostream>
using namespace std;

int partition(int arr[], int si, int ei) {
    int pivot = arr[ei]; // Choosing last element as pivot
    int i = si - 1;

    for (int j = si; j < ei; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[ei]);
    return i + 1;
}

void quickSort(int arr[], int si, int ei) {
    if (si >= ei) return;

    int pi = partition(arr, si, ei);

    quickSort(arr, si, pi - 1);
    quickSort(arr, pi + 1, ei);
}

int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before quick sort: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, n-1);
    cout << endl;

    cout << "After quick sort: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}