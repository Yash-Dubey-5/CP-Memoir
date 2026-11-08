#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x;    
    cin >> n >> x;
    
    vector<long long> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }

    vector<long long> dp(x + 1, 1e18);
    
    dp[0] = 0; 

    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - coins[j] >= 0){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            } 
        }
    }

    cout << (dp[x] >= 1e18 ? -1 : dp[x]) << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}