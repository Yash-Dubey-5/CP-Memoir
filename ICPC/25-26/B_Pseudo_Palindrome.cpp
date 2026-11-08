#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<n-1;i++) {
        if(a[i+1] <= d+a[i]) {
            i++;
        } else {
            ans++;
            if(n&1) {
                if(ans>=2) {
                    cout << "NO" << endl;
                    return;
                }
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
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