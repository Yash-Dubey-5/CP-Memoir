#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }
    vector<char> pattern(n);

    for (int i = 1; i < n; i++) {
        if (pos[i] < pos[i + 1]) {
            pattern[i] = '<';
        } else {
            pattern[i] = '>';
        }
    }

    vector<int> dp(n + 1, 0);
    dp[1] = 1;

    for (int len = 1; len < n; len++) {
        vector<int> ndp(n + 1, 0);
        vector<int> pref(n + 1, 0);

        for (int j = 1; j <= len; j++) {
            pref[j] = (pref[j - 1] + dp[j]) % MOD;
        }
        for (int j = 1; j <= len + 1; j++) {
            if (pattern[len] == '<') {
                ndp[j] = pref[min(j - 1, len)];

            } else {
                ndp[j] =(pref[len] - pref[min(j - 1, len)] + MOD) % MOD;
            }
        }
        dp = ndp;
    }

    int ans = 0;
    for (int j = 1; j <= n; j++) {
        ans = (ans + dp[j]) % MOD;
    }

    cout << ans << '\n';
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}