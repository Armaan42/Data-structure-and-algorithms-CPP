/*
Time Complexity = O(n.log(n))
*/

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            res[k] = a[i];
            i++;
            k++;
        }
        else{
            // b[j] <= a[i]
            res[k] = b[j];
            k++;
            j++;
        }
    }

    if(i==a.size()){
        while( j < b.size()){
            res[k] = b[j];
            k++;
            j++;
        }
    }

    if(j==b.size()){
        while( i < a.size()){
            res[k] = a[i];
            k++;
            i++;
        }
    }
}

void mergeSort(vector<int> &v){
    int n = v.size();

    //base case
    if(n==1){
        return;
    }

    int n1 = n/2, n2 = n - n/2;
    vector<int> a(n1), b(n2);

    //copy pasting
    for(int i=0; i<n1; i++){
        a[i] = v[i];
    }

    for(int i=0; i<n2; i++){
        b[i] = v[i+n1];
    }

    //recursion
    mergeSort(a);
    mergeSort(b);
    merge(a, b, v);
}

int main(){
    int arr[] = {1,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);

    //coying array arr in vector a
    vector<int> a(arr, arr+n1);

    int brr[] = {2,3,6,7,10,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);

    //copying array brr in vector b
    vector<int> b(brr, brr + n2);

    vector<int> res(n1+n2);

    merge(a, b, res);

    for(int i=0; i<res.size(); i++){
        cout <<res[i] << " ";

    }
}
