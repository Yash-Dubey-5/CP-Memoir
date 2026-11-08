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

bool isFair(ll n) {
    ll temp = n;
    while (temp > 0) {
        int d = temp % 10;
        if (d > 0 && n % d != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

void commence() {
    ll n;
    if (!(cin >> n)) return;

    while (!isFair(n)) {
        n++;
    }
    cout << n << "\n";
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




/* The goddamn while() works beccause from n to n+2520 you will definitely find the number which is divisble by all of its digits.
Since the LCM of n[1,10] = 2520*/