#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int pos_x=0,pos_y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L') pos_x--;
        else if(s[i]=='R') pos_x++;
        else if(s[i]=='U') pos_y++;
        else pos_y--;
    }
    
    if ((abs(pos_x) == 2 && pos_y == 0) ||
    (abs(pos_y) == 2 && pos_x == 0))
        cout << "YES\n";
    else
        cout << "NO\n";
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