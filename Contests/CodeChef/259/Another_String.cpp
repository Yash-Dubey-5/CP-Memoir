#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1') ans++;
        if(b[i]=='1') ans++;
    }
    if(ans%2==0) 
        cout << "YES\n";
    else 
        cout << "NO\n";
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