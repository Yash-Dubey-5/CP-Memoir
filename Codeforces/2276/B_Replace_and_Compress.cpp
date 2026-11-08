#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin >> s;

    bool has_2 = false;
    bool has_3 = false;

    for(int i=1;i<(int)s.size()-1;i++) {
        if(s[i-1]==s[i] && s[i]==s[i+1]) {
            has_2 = true;
        }
        if(s[i-1]==s[i+1] && s[i-1]!=s[i]) {
            has_3 = true;
        }
    }

    int ans = 1 + has_2 + has_3;
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}