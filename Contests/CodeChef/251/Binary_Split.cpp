#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int f_zero,f_one;
    for(int i=0;i<n;i++) {
        if(s[i] == '0') {
            f_zero = min(f_zero,i);
        }
        if(s[i] == '1') {
            f_one = min(f_one,i);
        }
    }
    int l_zero,l_one;
    for(int i=n-1;i>=0;i--) {
        if(s[i] == '0') {
            l_zero = max(l_zero,i);
        }
        if(s[i] == '1') {
            l_one = max(l_one,i);
        }
    }

    if(f_one != l_one && f_zero != l_zero) {
        string ans;
        for(int i=0;i<=max(f_one,f_zero);i++) {
            ans += s[i];
        }
        cout << ans << endl;
    } else {
        cout << s << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}