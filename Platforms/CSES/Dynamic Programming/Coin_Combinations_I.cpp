#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7; 

void solve() {
    ll n, x;
    cin >> n >> x;

    vector<ll> coins(n);
    for (ll i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<ll> dp(x + 1, 0);
    
    dp[0] = 1;

    for (ll i = 1; i <= x; i++) {
        for (ll j = 0; j < n; j++) {
            if (i - coins[j] >= 0) {
                dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
            }
        }
    }
    cout << dp[x] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}