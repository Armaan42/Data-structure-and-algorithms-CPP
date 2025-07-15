// Program to find Smallest and Largest Word in a String

#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string s = "Armaan is a good boy";
    stringstream ss(s);
    string temp;

    string smallest, largest;

    bool firstword = true;

    while(ss >> temp){
        if(firstword){
            smallest = largest = temp;
            firstword = false;
        }
        else{
            if(temp.length() > largest.length()){
                largest = temp;
            }
            if (temp.length() < smallest.length()){
                smallest = temp;
            }
        }
    }

    cout << largest << endl;
    cout << smallest << endl;

    return 0;
}