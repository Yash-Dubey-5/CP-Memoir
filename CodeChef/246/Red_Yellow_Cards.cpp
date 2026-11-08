#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, y;
    cin >> r >> y;
    if(r == 0) {
        cout << y/2 << endl;
        return;
    }
    y = y-r;
    if(y>0) {
        cout << r + y/2 << endl;
        return;
    } else {
        cout << r << endl;
        return;
    }
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