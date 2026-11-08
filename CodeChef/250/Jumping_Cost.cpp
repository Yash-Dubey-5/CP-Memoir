#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    vector<int> dp(n);
    for(int j=1;j<n;j++) {
        dp[j] = -101;
        for(int i=0;i<j;i++) {
            dp[j] = max(dp[j],dp[i]+a[j]-j+i);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++) {
        ans = max(ans,dp[i]);
    }
    cout << ans << "\n";
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