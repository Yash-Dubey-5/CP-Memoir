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
    vector<ll> a(n);
    set<ll> s;
    bool found = false;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(s.count(a[i])) { // checks two appearance
            found = true;
        }
        s.insert(a[i]);
    }

    if(found) yes
    else no
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



/* If there are two elements that infact does mean that there are two substring as well
*/