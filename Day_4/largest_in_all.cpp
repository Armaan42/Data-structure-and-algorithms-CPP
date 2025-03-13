#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int maxelem = INT_MIN;

    for(int i = 0; i < n; i++){
        int elem;
        cin >> elem;
        cout << elem << " ";

        if (elem > maxelem){
            maxelem = elem;
        }
    }

    cout << endl; 
    cout << "Max element: " << maxelem << endl; 

    return 0;
}
