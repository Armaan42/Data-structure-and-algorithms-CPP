/*
Product of array except self

    arr[] = {1,2,3,4};
    ans = {24,12,8,6}

    ans[i] = product of arr[] / arr[i]

    e.g., i = 1 {1,3,4}
                24 / 2 = 12

    // WITHOUT DIVISION 
    ans[i] = (product of all elements before i) * (product of all elements after i)

*/

#include<iostream>
using namespace std;


// with division
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int product = 1;

//     for(int i=0; i<n; i++){
//         product *= arr[i];
//     }

//     for(int i=0; i<n; i++){
//         arr[i] = product / arr[i];
//     }

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// without division

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int prefix[n], sufix[n], ans[n];

    // prefix
    prefix[0] = 1;
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] * arr[i-1];
    }

    // suffix
    sufix[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        sufix[i] = sufix[i+1] * arr[i+1];
    }

    // result
    for(int i=0; i<n; i++){
        ans[i] = prefix[i] * sufix[i];
    }

    // print
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
