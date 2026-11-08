#include <bits/stdc++.h>
using namespace std;


long long mod = 1e9 + 7;
void solve() {
    long long n;
    cin >> n;
    vector<long long> dp(n + 1);
    dp[0] = 1;

    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    cout << dp[n] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}