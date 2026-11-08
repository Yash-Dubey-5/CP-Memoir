#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long popcount = 0;
    long long bit = 1; 

    while (n > 0) {
        long long layer_cost = k * bit;
        
        if (n >= layer_cost) {
            popcount += k;
            n -= layer_cost;
        } else {
            popcount += (n / bit);
            break;
        }
        
        bit *= 2;
    }

    cout << popcount << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}