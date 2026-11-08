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
    if(a[0]==1) {
        dp[0] = 1;
    } else {
        dp[0] = 0;
    }
    int index = 0;
    for(int i=1;i<n;i++) {
        if(a[i]==1 || a[i]-a[i-1]==1) {
            dp[i] = dp[i-1]+1;
            index = i;
        } else {
            dp[i] = 0;
        }
    }
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