/*
Two elements of an array a, a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
Given an array of integers. Find the inversion count in the array
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr[] = {5, 1, 3, 0, 4, 9, 6};

    int arr[] = {5,1,8,2,3};
    // (5,1) (5,2) (5,3) ( 8,2) (8,3)
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr, arr+n);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    int count = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i] > v[j]){
                count++;
            }
        }
    }
    cout << count << endl;
}