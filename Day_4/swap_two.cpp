#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    cout << "Before Swapping: " << a << " " << b << endl;

    int temp = b;
    b = a;
    a = temp;

    cout << "After Swapping: " << a << " " << b << endl;

}