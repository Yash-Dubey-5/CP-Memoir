#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    if(k==n-1) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
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