#include <iostream>
#include <limits.h>  
using namespace std;

int main() {
    int size;
    cin >> size;

    if (size <= 0) {  
        cout << "Invalid array size" << endl;
        return 1;
    }

    int arr[size];  

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minElem = arr[0];  

    for (int i = 1; i < size; i++) {  
        if (arr[i] < minElem) {
            minElem = arr[i];
        }
    }

    cout << "Minimum Element: " << minElem << endl;

    return 0;
}
