#include<bits/stdc++.h>

using namespace std;

class Solution {
public: 
    bool isSafe(int row,int col,vector<string> &board,int &n) {
        
        int holdrow = row;
        int holdcol = col;
        //Checking Upper-Left Diagonal
        while(row >= 0 && col >= 0) {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }

        row = holdrow;
        col = holdcol;
        //Checking the row 
        while(row >=0) {
            if(board[row][col] == 'Q') return false;
            row--;
        }

        row = holdrow;
        col = holdcol;
        //Checking the Upper-Right Diagonal
        while(row >= 0 && col<n) {
            if(board[row][col] == 'Q') return false;
            row--;
            col++;
        }

        return true;
    }
    void placeNQueens(vector<vector<string>> &ans,vector<string> &board,int &n, int rowNo) {
        if(rowNo == n) {
            ans.push_back(board);
            return;
        }
        bool empty_row = true;
        for(int col=0;col<n;col++) {
            if(isSafe(rowNo,col,board,n)) {
                board[rowNo][col] = 'Q';
                placeNQueens(ans,board,n,rowNo+1);
                board[rowNo][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> board(n,s);
        for(int i=0;i<n;i++) {
            board[i] = s;
        }
        placeNQueens(ans,board,n,0);
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