#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const ll INF = 1e18;
const int MOD = 1e9 + 7;

void commence() {
    int n;
    cin >> n;

    vector<int> a(n);
    ll ans = -1e18,cur=0,x;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(x != 0) {
            cur++;
        } else {
            ans = max(cur,ans);
            cur = 0;
        }
    }
    ans = max(cur,ans);
    if(n == 1 && ans != 0) {
        cout << 1 << endl;
        return;
    }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
    return 0;
}