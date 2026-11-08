#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    if(n < 2) {
        cout << n << endl;
        return;
    }
    if(n == 2) {
        if(a[0] == a[1]) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
        return;
    }
    int l=1,r=n-2;
    int swaps = 1;
    int ans = n;
    while(l<=r) {
        if(a[l] != a[l-1]) {
            l++;
        }
        if(a[r] != a[r+1]) {
            r--;
        }
        if((a[l] == a[r] || a[l] == a[r-1] || a[l+1] == a[r]) && swaps) {
            swap(a[l],a[r]);
            swaps = 0;
        } else {
            ans--;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}