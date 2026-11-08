#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin >> n >> k;

    if(k<n || k>2*n-1) {
        cout << -1 << endl;
        return;
    }
    vector<vector<int>> m(n, vector<int>(n,0));
    int filler = 1;
    for(int i=0; i<n; i++) {
        m[i][0] = filler++;
    }
    for(int j=1; j<n; j++) {
        m[0][j] = filler++;
    }
    for(int i=1;i<=2*n-k-1;i++) {
        swap(m[i][0], m[i][i]);
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(m[i][j] != 0) {
                continue;
            }
            m[i][j] = filler++;
        }
    }
    for(auto &row: m) {
        for(auto &j: row) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}