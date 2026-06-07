#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

#define int long long

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;

const int INF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<n;i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        if (i < n - k || i >= k) {
            if (b[i] != -1 && b[i] != a[i]) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    if (n - k < k) {
        multiset<int> a_mid;
        for (int i = n - k; i < k; i++) a_mid.insert(a[i]);

        for (int i = n - k; i < k; i++) {
            if (b[i] != -1) {
                auto it = a_mid.find(b[i]);
                if (it == a_mid.end()) {
                    cout << "NO" << endl;
                    return;
                }
                a_mid.erase(it);
            }
        }
    }

    cout << "YES" << endl;
}

int32_t main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) solve();

    return 0;
}