#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones=0,zeros=count(s.begin(),s.end(),'0');
    if(s[n-1]=='0') {
        cout << n-zeros << endl;
        return;
    }
    int ans=zeros;
    for(int i=0;i<n-1;i++) {
        ones+=(s[i]=='1');
        zeros-=(s[i]=='0');
        ans=min(ans,ones+zeros);
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