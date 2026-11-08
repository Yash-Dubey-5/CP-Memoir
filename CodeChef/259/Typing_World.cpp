#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m;
    cin >> n >> m;
    string p,q;
    cin >> p >> q;

    bool left[26] = {};

    for (char c : q) {
        left[c - 'a'] = true;
    }

    int ans = 1;
    int curr = 1;
    for (int i=1;i<n;i++) {
        bool prevHand = left[p[i-1]-'a'];
        bool currHand = left[p[i]-'a'];

        if (prevHand == currHand) {
            curr++;
        } else {
            curr = 1;
        }
        ans = max(ans, curr);
    }

    cout << ans << '\n';
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