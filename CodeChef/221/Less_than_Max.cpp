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
    f(i,n) {
        cin >> a[i];
    }

    set<int> s;
    int ans = 0;
    f(i,n) {
        if(a[i] == 1) {
            ans++;
            s.insert(1);
        } else {
            if(s.count(a[i] - 1)) {
                ans++;
                s.insert(a[i]);
            }
        }
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