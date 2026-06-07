#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;

const int INF = 1e18;
const int MOD = 1e9+7;

bool check(vector<int> &a,int &x) {
    int n = a.size();
    vector<int> b;
    for(int i=0;i<n;i++) {
        if(a[i] != x) {
            b.pb(a[i]);
        }
    }
    int m = b.size();
    for(int i=0;i<(m+1)/2;i++) {
        if(b[i] != b[m-i-1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<(n+1)/2;i++) {
        if(a[i]==a[n-i-1]) {
            continue;
        } else {
            if(check(a,a[i]) || check(a,a[n-i-1])) {
                cout << "YES" << endl;
                return;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

int32_t main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) solve();

    return 0;
}