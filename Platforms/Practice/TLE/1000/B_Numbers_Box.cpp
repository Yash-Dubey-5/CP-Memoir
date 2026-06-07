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
    int n,m;
    cin >> n >> m;

    vector<ll> a;
    ll x;
    int cntmi = 0,sum=0;
    for(int i=0;i<n*m;i++) {
        cin >> x;
        a.push_back(abs(x));
        if(x<=0) {
            cntmi++;
        }
        sum += abs(x);
    }

    if(cntmi%2==0) {
        cout << sum << endl;
    } else {
        ll low = INF;
        for(int i=0;i<n*m;i++) {
            low = min({low,a[i]});
        }
        cout << sum - 2*low << endl;
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