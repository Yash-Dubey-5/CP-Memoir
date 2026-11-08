#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    int cnt=0,l=-1,r=-1,x;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(x&1) {
            if(l<0) l=i;
            r=i;
            cnt++;
        }
    }
    cout << (cnt&1 ? n-min(l+1,n-r) : n) << endl;
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