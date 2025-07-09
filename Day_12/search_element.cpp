#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
        bool search_matrix(vector< vector<int> > &v, int target){
            if(v.empty() || v[0].empty()){
                return false;
            }
            
            int row = v.size();
            int col = v[0].size();

            int left = 0;
            int right = (row*col) - 1;

            while(left <= right){
                int mid = (left + right) / 2;

                if(mid = target){
                    return true;
                }
                else if(mid < target){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            return false;
        }
};

int main(){
    solution sol;
    vector <vector<int> > v;

    int row,col,target;
    cin >> row >> col;

    v.resize(row, vector<int>(col) );

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> v[i][j];
        }
    }

    cin >> target;

    if(sol.search_matrix(v, target)){
        cout << "Target found" << endl;
    }
    else{
        cout << "Target not found" << endl;
    }
    return 0;

}