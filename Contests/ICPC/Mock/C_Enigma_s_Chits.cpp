#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if(b%2!=0) {
        cout << -1 << endl;
        return;
    } 
    if((a<c && c%3!=0)) {
        cout << -1 << endl;
    }
    for(int i=1;i<a;i++) {

    }
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