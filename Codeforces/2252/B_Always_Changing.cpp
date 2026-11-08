#include <bits/stdc++.h>
using namespace std;

const int NEG = -1e9;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int c0 = 0;
    for (char c : s) if (c == '0') c0++;
    int c1 = n - c0;
    int D = c0 - c1;

    // dp[start][last]
    int dp[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            dp[i][j] = NEG;

    for (char ch : s) {
        int c = ch - '0';

        if (c == 0) {
            dp[0][0] = max({dp[0][0], 1, dp[0][1] + 1});
            dp[1][0] = max(dp[1][0], dp[1][1] + 1);
        } else {
            dp[1][1] = max({dp[1][1], 1, dp[1][0] + 1});
            dp[0][1] = max(dp[0][1], dp[0][0] + 1);
        }
    }

    int ans = INT_MAX;

    // start, end, kept difference
    vector<tuple<int,int,int>> states = {
        {0,0,1},
        {0,1,0},
        {1,0,0},
        {1,1,-1}
    };

    for (auto [st, en, diff] : states) {
        int len = dp[st][en];
        if (len < 0) continue;
        if (abs(D - diff) <= 1)
            ans = min(ans, n - len);
    }

    if (ans == INT_MAX) cout << -1 << '\n';
    else cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}