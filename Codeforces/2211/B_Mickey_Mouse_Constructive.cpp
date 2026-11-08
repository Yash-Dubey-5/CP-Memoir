#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL)

#define int long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int INF = 1e18;
const int MOD = 676767677;


vector<long long> getFactors(long long n) {
    vector<long long> factors;
    
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i); 
            
            if (i * i != n) {
                factors.push_back(n / i);
            }
        }
    }
    // sort(factors.begin(), factors.end());
    
    return factors;
}
void solve() {
    int x,y;
    cin >> x >> y;

    vector<int> a(x+y);

    int temp = x*1 + y*(-1);
    for(int i=0;i<x+y;i++) {
        if(i<x) {
            a[i] = 1;
        } else {
            a[i] = -1;
        }
    }
    temp = abs(temp);
    vector<int> factors;
    factors = getFactors(temp);
    int ans = (factors.size())%MOD;
    cout << max(ans,1LL) << endl;
    for(int i=0;i<a.size();i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    fastio();

    int t = 1;
    cin >> t;

    while(t--) solve();

    return 0;
}