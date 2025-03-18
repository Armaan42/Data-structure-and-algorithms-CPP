#include <iostream>
#include <vector>
using namespace std;

void swap(int &i, int &j) { 
    int temp = i;
    i = j;
    j = temp;
}

void sort01(vector<int> &v) {
    int i = 0, j = v.size() - 1; 

    while (i < j) {  
        if (v[i] == 0) {
            i++;
        } 
        else if (v[j] == 1) {
            j--;
        } 
        else {  
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v = {1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0};

    cout << "Before sorting: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    sort01(v);

    cout << "After sorting: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
