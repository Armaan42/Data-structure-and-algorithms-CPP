#include<iostream>
using namespace std;

int main(){
    char str[] = {'a', 'b', 'c', 'd', 'e'};

    // for(int i=0; i<sizeof(str)/sizeof(str[0]); i++){
    //     cout << str[i] << " ";
    // }cout << endl;

    // cout << (int) (str[5]) << endl; // null character at the end '\0'

    //2-way of printing 
    // for(int i=0; i<str[i] != '\0'; i++){
    //     cout << str[i] << " ";
    // }cout << endl;

    //3-way of printing
    cout << str << endl;

    char str1[] = {'a', 'b','\0', 'c', 'd'};
    cout << str1 << endl; // here it will print till '\0' and forgot the remaining things
    


}