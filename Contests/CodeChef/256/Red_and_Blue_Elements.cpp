#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int Sn=0,Sb=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        Sn += a[i];
    }
    sort(a.begin(),a.end());

    int ans = 0;
    for(int k=1;k<=n/2;k++) {
        Sb+= a[n-k];
        ans = max(ans,Sn*k+(n-2*k)*Sb);
    }
    cout << ans << "\n";
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