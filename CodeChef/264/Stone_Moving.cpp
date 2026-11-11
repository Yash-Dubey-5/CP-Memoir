#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];

    vector<int> diff(n+2,0); 
    int run = 0, ans = 0;
    for(int i=1;i<=n;i++) {
        run += diff[i];
        int x = min(a[i]+run,n-i);
        ans += x;
        if(x > 0) {
            diff[i+1]++;
            diff[i+x+1]--;
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}