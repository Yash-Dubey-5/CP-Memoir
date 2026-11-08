#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,l,d;
    cin >> n >> l >> d;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int ans=0;
    if(d>=2*l) {
        ans += 2*n*(d/(2*l));
        d -= 2*l*(d/(2*l));
    }

    for(int i=0;i<n;i++) {
        if(x[i] <= d) {
            ans++;
        }
        if(2*l-x[i] <= d) {
            ans++;
        }
    }
    cout << ans << endl;
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