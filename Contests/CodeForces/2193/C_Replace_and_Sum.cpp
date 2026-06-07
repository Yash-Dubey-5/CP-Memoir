#include <bits/stdc++.h>

using namespace std; 
#define ll long long

void commence() {
    int n,q;
    cin >> n >> q;

    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    vector<int> best_val(n),pref(n,0);
    best_val[n-1] = max(a[n-1],b[n-1]);
    for (int i=n-2;i>=0;i--) {
        best_val[i] = max({a[i],b[i], best_val[i + 1]});
    }

    pref[0] = best_val[0]; 
    for (int i = 1; i < n; i++) {
        pref[i] = best_val[i] + pref[i-1];  
    }

    // for(int i=0;i<n;i++) {
    //     cout << pref[i] << " "; 
    // }
    // cout << endl;

    int l, r;
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        if(l == 1) {
            cout << pref[r-1] << " ";
        } else if(l == r) {
            cout << best_val[r-1] << " ";
        } else {
            cout << pref[r-1] - pref[l-2] << " ";
        }
    }
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
    return 0;
}