#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count_0 = 0, count_1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) count_0++;
        else count_1++;
    }
    if(count_1>= count_0) cout << "Bessie\n";
    else cout << "Elsie\n";
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