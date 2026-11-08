#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    long long cur = v[0];
    long long ans = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] < cur) {
            ans += cur - v[i];
        } else {
            cur = v[i];
        }
    }
    cout << ans << "\n";
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