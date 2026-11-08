#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m;
    cin >> n >> m;
    int r1=1e9,r2=-1e9,c1=1e9,c2=-1e9;
    string s;
    for(int i=0;i<n;i++) {
        cin >> s;
        for(int j=0;j<m;j++) {
            if(s[j]=='1') {
                r1=min(r1,i);
                r2=max(r2,i);
                c1=min(c1,j);
                c2=max(c2,j);
            }
        }
    }
    cout << (r2-r1+1)*(c2-c1+1) << endl;
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
