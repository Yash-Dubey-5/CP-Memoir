#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    int x;
    cin >> x;
    int colN = x%m;
    int rowN;
    if(colN==0) {
        rowN = x/m;
    } else {
        rowN = x/m +1;
    }
    cout << min(rowN,n-rowN+1) << endl;
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