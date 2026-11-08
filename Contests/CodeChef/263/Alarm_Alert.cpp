#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int x,y,d;
    cin >> x >> y >> d;
    // first multiple of a where b has already rung within d (ends by lcm)
    auto first=[&](int a,int b) {
        for(int t=a;;t+=a) if(t>=b && t%b<=d) return t;
    };
    cout << min(first(x,y),first(y,x)) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
