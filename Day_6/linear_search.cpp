#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];

    bool flag = false;
    
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    for(int i=0; i<size; i++){
        if (arr[i] == target) {
            cout << i << endl;
            flag = true; 
        }
    }

    if (flag) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
