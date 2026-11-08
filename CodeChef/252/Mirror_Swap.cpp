#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> v(2 * n);
    long long ans = 0;

    for (int i=0;i<2*n;i++) {
        cin >> v[i];
    }
    for (int i=0;i<n;i++) {
        ans += max(v[i],v[2*n-1-i]);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}