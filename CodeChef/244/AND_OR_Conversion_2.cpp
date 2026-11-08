#include <bits/stdc++.h>
using namespace std;

int mod = 998244353;

long long modpow(long long a, long long e) {
    long long r = 1;
    while (e) {
        if (e & 1) r = r * a % mod;
        a = a * a % mod;
        e >>= 1;
    }
    return r;
}

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    string a_ = "";
    for(int i=0;i<n;i++) {
        if(i==0 || a[i]!=a[i-1]) {
            a_.push_back((a[i]));
        }
    }
    long long int ans = 0;

    if(a_.size() == 1) {
        cout << 1 << "\n";
        return;
    }

    if(a_.size() == n) {
        ans = modpow(2, n)-1;
    } else {
        int k = n-a_.size();
        vector<long long int> combinations(k+1);
        combinations[0] = 1;
        for(int i=1;i<=k;i++) {
            combinations[i] = (combinations[i-1] * ((n-1)-i+1) / i);
            if(i==k) {
                ans = (ans + combinations[i] % mod) % mod;
                continue;
            }
            ans = (ans + ((combinations[i] * modpow(2, k-i)) % mod)) % mod;
        }
    }

    cout << ans << "\n";
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