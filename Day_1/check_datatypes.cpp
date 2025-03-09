// Int
// Float
// double
// char
// boolean
// string -> a collection of characters

#include<iostream>
#include<limits>
using namespace std;

int main(){
    // cout << "int: " << sizeof(int) << endl;
    // cout << "short int: " << sizeof(short int) << endl;
    // cout << "long int: " << sizeof(long int) << endl;
    // cout << "float: " << sizeof(float) << endl;
    // cout << "double: " << sizeof(double) << endl;
    // cout << "char: " << sizeof(char) << endl;
    // cout << "bool: " << sizeof(bool) << endl;
    // cout << "string: " << sizeof(string) << endl;

    cout << "Max Int: " << numeric_limits<int>::max() << endl;
    cout << "Min Int: " << numeric_limits<int>::min() << endl;

    cout << "Max Float: " << numeric_limits<float>::max() << endl;
    cout << "Min Float: " << numeric_limits<float>::min() << endl;

    cout << "Max Double: " << numeric_limits<double>::max() << endl;
    cout << "Min Double: " << numeric_limits<double>::min() << endl;

    // we first need to convert char into int to print its value
    cout << "Max char: " << int(numeric_limits<char>::max()) << endl; //ASCII 127 is DEL character.
    cout << "Min char: " << int(numeric_limits<char>::min()) << endl; //AsCII -127 is an unprintable character.

    cout << endl;

    // From 'A' to 'Z'
    for(char i='A'; i<='Z'; i++){
        cout << i << ": " << int(i) << endl;
    }
    cout << endl;

    // From 'a' to 'z'
    for(char j='a'; j<='z'; j++){
        cout << j << ": " << int(j) << endl;
    }
    cout << endl;

    // From  '!' to '/'
    for (char i = 33; i <= 47; i++) { 
        cout << i << " - " << int(i) << endl;
    }

    return 0;
}