#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    int l = 1e18;
    int r = -1e18;
    int count = 0;
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if(a[i] == 0) {
            count++;
        }
        int val = (i + 1) * max(0LL, a[i] - 1);
        l = min(l, val);
        r = max({r, val});
    }
    s.insert(count);

    for (int i = l; i <= r; i++) {
        if(i == a[0]) continue;
        s.insert(i);
    }

    cout << s.size() << "\n";

    for (int x : s) {
        cout << x << " ";
    }

    cout << "\n";
    // cout << l << " " << r;
    // cout << "\n";
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