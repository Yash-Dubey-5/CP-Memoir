#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,d;
    cin >> n >> d;
    int a=0,b=0,both=0,x;
    vector<int> A(n);
    for(int i=0;i<n;i++) {
        cin >> A[i];
        a += A[i];
    }
    for(int i=0;i<n;i++) {
        cin >> x;
        b += x;
        both += min(A[i],x); 
    }

    cout << min({d+a,d+b,2*d+both}) << '\n';
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