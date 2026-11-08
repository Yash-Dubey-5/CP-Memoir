#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

#define int long long

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;

const int INF = 1e18;
const int MOD = 1e9+7;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    for(int i=0;i<n;i++) {
        if(n==1) {
            cout << 1 ;
        } else {
            cout << 2 << " ";
        }
    }
    cout << endl;
}

int32_t main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) solve();

    return 0;
}