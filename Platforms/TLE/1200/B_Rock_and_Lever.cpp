#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(32,0);
    int x;
    for(int i=0;i<n;i++) {
        cin >> x;
        int cnt=0;
        while(x>0) {
            x /= 2;
            cnt++;
        }
        v[cnt]++;
    }
    int ans=0;
    for(int i=0;i<v.size();i++) {
        ans += (v[i]*(v[i]-1))/2;
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