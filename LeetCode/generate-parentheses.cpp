#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void solve(int open, int close, string &ds, vector<string> &ans, int n) {
        if (close == n) {
            ans.push_back(ds);
            return;
        }

        if (open < n) {
            ds.push_back('(');
            solve(open + 1, close, ds, ans, n);
            ds.pop_back();
        }

        if (close < open) {
            ds.push_back(')');
            solve(open, close + 1, ds, ans, n);
            ds.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string ds;
        solve(0, 0, ds, ans, n);
        return ans;
    }
};

int main() {
    Solution solver;
    int n;
    if (!(cin >> n)) return 0;
    
    vector<string> ans = solver.generateParenthesis(n);
    
    if(ans.empty()) {
        cout << "No possible configuration" << endl;
    } else {
        for(const auto& solution : ans) {
            for(const auto& row : solution) {
                cout << row ;
            }
            cout << endl; 
        }
        cout << "Total solutions: " << ans.size() << endl;
    }
    return 0;
}

