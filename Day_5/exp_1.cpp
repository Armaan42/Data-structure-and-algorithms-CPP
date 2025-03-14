//WAP to calculate sum of two numbers using pointers

#include<iostream>
using namespace std;

int main(){

    // int a, b;
    // cin >> a >> b;

    // int *p = &a;
    // int *q = &b;

    // cout << (*p + *q);
    // cout << endl;

    int x, y;

    int *p1 = &x;
    int *p2 = &y;

    cin >> *p1;
    cin >> *p2;

    // cout << *p1 + *p2;
    cout << x + y;

}