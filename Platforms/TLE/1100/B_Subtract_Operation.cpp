#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)


void solve() {
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    
    for(int i=0;i<n;i++) {
        cin >> v[i];    
    }

    map<int, bool> mp;
    for(auto it : v) {
        mp[it] = true;
    }

    for(int i=0;i<n;i++) {
        if(mp.find(v[i] - k) != mp.end()) {
            cout << "YES" << endl;
            return;
        }
        
    }
    cout << "NO" << endl;
}
int32_t main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}