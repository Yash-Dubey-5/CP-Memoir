#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

void solve() {
    int n;
    cin >> n;

    vector<int> cnt(n + 2);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    vector<long long> pow2(n + 1, 1);

    for (int i = 1; i <= n; i++) {
        pow2[i] = pow2[i - 1] * 2 % MOD;
    }

    vector<long long> ways(n + 2);

    for (int i = 0; i <= n + 1; i++) {
        ways[i] = (pow2[cnt[i]] - 1 + MOD) % MOD;
    }

    long long ans = 0;
    long long prefix = 1;

    // m = mex
    for (int m = 1; m <= n + 1; m++) {

        // We need 0,1,...,m-1 at least once
        prefix = prefix * ways[m - 1] % MOD;

        // Case 1:
        // mex = m, max = m-1
        ans = (ans + prefix) % MOD;

        // Case 2:
        // mex = m, max = m+1
        // m must be absent, m+1 must appear.
        if (m + 1 <= n) {
            long long case2 = prefix * ways[m + 1] % MOD;
            ans = (ans + case2) % MOD;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}