#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

#define int long long int
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// const int INF = 1e18;
// const int MOD = 1e9+7;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    // GCD for odd indexed number
    int Oddgcd = 0;
    for(int i=0;i<n;i+=2) {
        Oddgcd = __gcd(Oddgcd,v[i]);
    }
    // GCD for even indexed number
    int Evengcd = 0;
    for(int i=1;i<n;i+=2) {
        Evengcd = __gcd(Evengcd,v[i]);
    }

    // Checking Even gcd on odd indexes
    bool flag = true;
    for(int i=0;i<n;i+=2) {
        if(v[i]%Evengcd == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << Evengcd << endl;
        return;
    }

    // Checking Even gcd on even indexes
    flag = true;
    for(int i=1;i<n;i+=2) {
       if(v[i]%Oddgcd == 0) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << Oddgcd << endl;
        return;
    }

    // If nothing is correct 
    cout << 0 << endl;
}

int32_t main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}