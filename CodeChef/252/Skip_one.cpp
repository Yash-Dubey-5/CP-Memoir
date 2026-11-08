#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    long long sum = 0,max_=0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sum += x;
        max_ = max(max_, x);
        if (sum - max_ <= k) {
            ans = i + 1;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}