// count most occuring word in a string

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string str = "Armaan is a good boy. He is a DSA expert as well";

    stringstream ss(str);
    string temp;
    vector <string> v;

    while(ss >> temp){
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    int maxCount = 1;
    int count = 1;

    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }

        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;

    count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }

        if(count == maxCount){
            cout << v[i] << " ";
        }
    }
    cout << endl;
    return 0;
}