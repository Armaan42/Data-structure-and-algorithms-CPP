/*
If an array arr contains n elements, then check if the given array is a palindrome or not .
*/

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = size - 1;

    bool ispalindrome = true;

    while(left <= right){
        if(arr[left] != arr[right]){
            ispalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if(ispalindrome){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}