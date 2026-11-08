#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<vector<long long>> m(n,vector<long long>(n,0));
    vector<long long> ans; 
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> m[i][j];
            if(i==j) {
                ans.push_back(m[i][j]/2);
            }
        }
    }
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}