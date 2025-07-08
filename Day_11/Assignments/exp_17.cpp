/*
Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[3][3];
    int middle = 3/2;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "Middle Row: ";
    for(int i=0; i<3; i++){
        cout << arr[middle][i] << " ";
    }
    cout << endl;

    cout << "Middle Column: ";
    for(int j=0; j<3; j++){
        cout << arr[j][middle] << " ";
    }
    cout << endl;


    return 0;
}