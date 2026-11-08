#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<ll> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.rbegin(), a.rend());

    ll max_score = 0;
    ll total = 0;

    for (int k = 1; k <= n; k++) {
        total += b[k - 1];

        if (total > n) break;

        ll x = a[total - 1];
        
        ll c_score = x * k;
        max_score = max(max_score, c_score);
    }

    cout << max_score << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}