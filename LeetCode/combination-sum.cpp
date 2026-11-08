#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    void solve(vector<int> &candidates,int target,int index,vector<int> &temp,vector<vector<int>> &ans) {
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(index > candidates.size()-1 || target < 0) {
            return;
        }

        // TAKE
        temp.push_back(candidates[index]);
        solve(candidates,target - candidates[index],index,temp,ans);
        temp.pop_back();

        // SKIP
        solve(candidates,target,index+1,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int index = 0;

        solve(candidates,target,index,temp,ans); 
        return ans;
    }
};

int main() {
    Solution solver;
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    int target;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    cin >> target;
    
    vector<vector<int>> ans = solver.combinationSum(a,target);
    
    if(ans.empty()) {
        cout << "No possible configuration" << endl;
    } else {
        // FIXED: Cleaner output loop
        for(const auto& solution : ans) {
            for(const auto& row : solution) {
                cout << row << " ";
            }
            cout << endl; 
        }
        cout << "Total combinations: " << ans.size() << endl;
    }
    return 0;
}