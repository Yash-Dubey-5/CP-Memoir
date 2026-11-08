#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1, 0);
    vector<int> pre(n + 1, 0);

    for (int i=1;i<=n;i++) {
        cin >> a[i];
        pre[i]=pre[i-1]+a[i];
    }

    vector<int> freq(k, 0);
    int ans = 0;

    for (int r=1;r<=n;r++) {
        int j = r - k - 1;

        if (j >= 0) {
            freq[pre[j] % k]++;
        }

        int x = pre[r] % k;
        ans += freq[x];
    }

    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}