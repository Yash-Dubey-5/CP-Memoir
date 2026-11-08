#include<bits/stdc++.h>

using namespace std;

class Solution {
public: 
    void placeNQueens(vector<vector<string>> &ans,vector<string> &board,int &n,
                    int rowNo,vector<int> &ur,vector<int> &ul,vector<int> &row) {
        if(rowNo == n) {
            ans.push_back(board);
            return;
        }

        for(int col=0;col<n;col++) {
            if(ur[rowNo+col] == 0 && ul[n-1+rowNo-col] == 0 && row[col] == 0) {
                ur[rowNo+col] = 1;
                ul[n-1+rowNo-col] = 1;
                row[col] = 1;
                board[rowNo][col] = 'Q';
                placeNQueens(ans,board,n,rowNo+1,ur,ul,row);
                ur[rowNo+col] = 0;
                ul[n-1+rowNo-col] = 0;
                row[col] = 0;
                board[rowNo][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n,s);
        //Make 3 hashed strcuture to check for 2 diagonals and row/column
        vector<int> Upper_Right(2*n-1,0),Upper_left(2*n-1,0),Row(n,0);
        for(int i=0;i<n;i++) {
            board[i] = s;
        }
        placeNQueens(ans,board,n,0,Upper_Right,Upper_left,Row);
        return ans;
    }
};

int main() {
    Solution solver;
    int n;
    if (!(cin >> n)) return 0;
    
    vector<vector<string>> ans = solver.solveNQueens(n);
    
    if(ans.empty()) {
        cout << "No possible configuration" << endl;
    } else {
        // FIXED: Cleaner output loop
        for(const auto& solution : ans) {
            for(const string& row : solution) {
                cout << row << endl;
            }
            cout << "----------" << endl; 
        }
        cout << "Total solutions: " << ans.size() << endl;
    }
    return 0;
}