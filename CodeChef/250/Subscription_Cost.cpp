#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x,y;
    cin >> n >> x >> y;
    if(n<=3) {
        cout << x*n << endl;
        return;
    }

    cout << 3*x + (n-3)*y << endl;
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