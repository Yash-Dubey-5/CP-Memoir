#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ans = 0,x;
    for(int i=n-1;i>0;i--) {
        if(a[i] < a[i-1]) {
            x = ceil((a[i-1]-a[i])/2.0);
            ans += x;
            a[i] += x;
            a[i-1] -= x;
        } 
    }
    for(int i=0;i<n-1;i++) {
        if(a[i] > a[i+1]) {
            x = ceil((a[i]-a[i+1])/2.0);
            ans += x;
            a[i] -= x;
            a[i+1] += x;
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