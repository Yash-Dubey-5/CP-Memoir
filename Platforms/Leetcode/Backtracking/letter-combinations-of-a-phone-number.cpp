//Better to use two loops with array loopkups
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(int index, string &ds, string &digits,
               vector<string> &ans, vector<string> &table) {

        if(index == digits.size()) {
            ans.push_back(ds);
            return;
        }

        string &letters = table[digits[index] - '0'];

        for(char c : letters) {
            ds.push_back(c);
            solve(index + 1, ds, digits, ans, table);
            ds.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        vector<string> table = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string ds;
        ds.reserve(digits.size());

        solve(0, ds, digits, ans, table);
        return ans;
    }
};

int main() {
    Solution solver;
    string s;
    if (!(cin >> s)) return 0;
    
    vector<string> ans = solver.letterCombinations(s);
    
    if(ans.empty()) {
        cout << "No possible configuration" << endl;
    } else {
        for(const auto& solution : ans) {
            for(const auto& row : solution) {
                cout << row; 
            }
            cout << " ";
        }
        cout << "Total solutions: " << ans.size() << endl;
    }
    return 0;
}