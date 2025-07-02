#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nextPermutation(vector<int> &v) {
    int n = v.size();
    int idx = -1;

    // Step 1: Find the pivot (first decreasing element from the end)
    for(int i = n-2; i>=0; i--) {
        if(v[i] < v[i+1]) {
            idx = i;
            break;
        }
    }

    // If array is in descending order, return the first permutation
    if(idx == -1) { 
        reverse(v.begin(), v.end());
        return v;
    }

    // Step 2: Find the smallest element > v[idx] in the suffix
    int j = n-1;
    while(v[j] <= v[idx]) {
        j--;
    }

    // Step 3: Swap v[idx] and v[j]
    swap(v[idx], v[j]);

    // Step 4: Reverse the suffix (after idx)
    reverse(v.begin()+idx+1, v.end());

    return v;
}

int main() {
    vector<int> v = {1,4,3,2};
    nextPermutation(v);

    cout << "Next Permutation: ";
    for(auto i : v) {
        cout << i << " "; 
    }
    cout << endl;

    return 0;
}