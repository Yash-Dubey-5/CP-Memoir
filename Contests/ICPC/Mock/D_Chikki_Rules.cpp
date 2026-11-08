#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    int sumA = 0, sumB = 0;

    for (int &x : a) {
        cin >> x;
        sumA += x;
    }

    for (int &x : b) {
        cin >> x;
        sumB += x;
    }

    if (sumA != sumB) {
        cout << -1 << '\n';
        return;
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    int prefA = 0, prefB = 0;

    for (int i = 0; i < n; i++) {
        prefA += a[i];
        prefB += b[i];

        if (prefA < prefB) {
            cout << -1 << '\n';
            return;
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            ans += a[i] - b[i];
        }
    }

    cout << ans << '\n'; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}