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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0,scaler=1;
    int temp;
    for(int i=0;i<n/2;i++) {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
    for(int i=0;i<n;i++) {
        if(a[i]==a[0]) {
            scaler = max(scaler,i+1);
            continue;
        } else {
            if(scaler<i+1) {
                scaler *= 2;
                ans++;
            }
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) solve();

    return 0;
}