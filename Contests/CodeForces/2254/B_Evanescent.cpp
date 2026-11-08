#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int runs=1;
    for(int i=1;i<n;i++) {
        if(s[i]!=s[i-1]) runs++;
    }

    int ans = runs;
    for(int i=1;i<n-1;i++) {
        int current = runs;
        if(s[i] == s[i+1] || s[i] == s[i-1]) {

        } else if(s[i+1] == s[i-1]) {
            current -= 2;
        } else {
            current -= 1;
        }
        ans = min(ans, current);
    }
    cout << ans << "\n";
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