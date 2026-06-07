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
    ll a,b;
    cin >> a >> b;
    ll ans = 0;

    if(a/b == 0) {
        cout << 0 << endl;
        return;
    }
    if(b==1) {
        ans += 1;
        b = 2;
    }
    int loop=log2(a)+1;
    for(int i=0;i<loop;i++) {
        
    }
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