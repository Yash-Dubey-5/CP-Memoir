#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int cnt = 0;
    for(int i=0;i<n;i++) {
        int last2 = 10*(s[i]-'0') + (s[(i+1)%n]-'0'); 
        if(last2 % 4 == 0) cnt++;
    }

    cout << cnt << '\n';
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