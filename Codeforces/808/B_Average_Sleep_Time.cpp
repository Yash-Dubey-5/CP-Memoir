#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    int x,ans=0;
    for(int i=0;i<n;i++){
        cin >> x;
        if(i==0 || i==n-1){
            ans += x;
        }
        else{
            ans += 2*x;
        }
    }
    cout << 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}