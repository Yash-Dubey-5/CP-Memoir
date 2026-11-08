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
    // NEW: Array to track which coin was used to reach sum 'i'
    vector<long long> first_coin(x + 1, -1); 
    
    dp[0] = 0; 

    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(i - coins[j] >= 0){
                // NEW: We only update if this coin path is strictly better
                if(dp[i - coins[j]] + 1 < dp[i]) {
                    dp[i] = dp[i - coins[j]] + 1;
                    first_coin[i] = coins[j]; // Record the coin used
                }
            } 
        }
    }

    if (dp[x] >= 1e18) {
        cout << -1 << "\n";
    } else {
        // 1. Print the minimum number of coins
        cout << "Minimum coins needed: " << dp[x] << "\n";
        
        // 2. Reconstruct the exact coins used
        cout << "Coins used: ";
        long long current_sum = x;
        
        // Backtrack from the target sum down to 0
        while (current_sum > 0) {
            long long coin_used = first_coin[current_sum];
            cout << coin_used << " ";
            current_sum -= coin_used; // Jump back to the previous state
        }
        cout << "\n";
    }
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