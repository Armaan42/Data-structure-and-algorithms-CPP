/*
maze path:

only two direction: right, down
*/

#include<iostream>
using namespace std;

int mazePath(int sr, int sc, int er, int ec){

    if(sr > er || sc > ec) return 0;
    if(sr == er || sc == ec) return 1;

    int rightWays = mazePath(sr, sc+1, er, ec);
    int downWays = mazePath(sr+1, sc, er, ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}

// another method to solve this problem
int mazePath2(int row, int col){
    if(row < 1 || col < 1) return 0;
    if(row == 1 || col == 1) return 1;

    int rightWays = mazePath2(row, col-1);
    int downWays = mazePath2(row-1, col);
    int totalWays = rightWays + downWays;
    return totalWays;
}

void printPath(int sr, int sc, int er, int ec, string s){
    if(sr > er || sc > ec) return;
    if(sr == er || sc == ec){
        cout << s << endl;
        return;
    }

    printPath(sr, sc+1, er, ec, s + 'R'); // right
    printPath(sr+1, sc, er, ec, s + 'D'); // down
}

int main(){
    // cout << mazePath(1,1,4,4) << endl;
    // printPath(1,1,4,4,"");

    cout << mazePath2(3,4) << endl;
}