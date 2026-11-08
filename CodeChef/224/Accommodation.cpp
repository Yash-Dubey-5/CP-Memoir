#include <bits/stdc++.h>
using namespace std; 

#define int long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const int INF = 1e18;
const int MOD = 1e9 + 7;

void commence() {
    int n;
    int b,g,x,y;
    cin >> b >> g >> x >> y >> n;

    int total = b+g;
    int optroom = (total+n-1)/n;

    int reqboys = optroom*x;
    int reqgirls = optroom*y;
    if(b-reqboys < 0 || g-reqgirls < 0) {
        cout << -1 << endl;
        return;
    }

    int spaceleft = optroom*(n-x-y);
    int boysleft = b-optroom*x;
    int girlsleft = g-optroom*y;
    
    if(spaceleft-(boysleft+girlsleft) < 0) {
        cout << -1 << endl;
        return;
    }
    cout << optroom << endl;
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