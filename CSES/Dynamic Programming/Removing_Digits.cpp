#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;

    set<int> digits;


    for(int i=1;i<=n;i++) {
        int temp = i;
        while (temp > 0) {
            digits.insert(temp % 10);
            temp /= 10;
        }
        for(auto it=digits.begin();it!=digits.end();it++) {
            int digit = *it;

            if(i>=digit) {
                dp[i] = min(dp[i],dp[i-digit]+1);
            }
        }
        digits.clear();
    }

    cout << dp[n] << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--) {
        solve();
    }

    return 0;
}