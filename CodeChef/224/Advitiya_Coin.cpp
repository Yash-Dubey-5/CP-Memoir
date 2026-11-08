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
    long long n, k;
    cin >> n >> k;
    vector<long long> p(n);
    f(i, n) cin >> p[i];

    int trades = 0;
    if (n < 2) {
        cout << 0 << endl;
        return;
    }

    int i = 0;
    while (i < n) {
        long long mn = p[i];
        long long mx = p[i];
        bool found = false;
        
        for (int j = i + 1; j < n; j++) {
            if (abs(p[j] - mn) > k || abs(p[j] - mx) > k) {
                trades++;
                i = j + 1; 
                found = true;
                break;
            }
            mn = min(mn, p[j]);
            mx = max(mx, p[j]);
        }
        
        if (!found) break; 
    }

    cout << trades << endl;
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