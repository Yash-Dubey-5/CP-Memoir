#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b;
    cin >> a >> b;
    if(a<=b) {
        cout << -1 << "\n";
        return;
    }
    int temp = max(2*b-a,0LL);
    int ans = b - temp;
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