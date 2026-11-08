#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for(int i=2;i*i<=n+1;i++) {
        if((n+1)%i == 0) {
            cout << "NO" << endl;
            return;
        } 
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}