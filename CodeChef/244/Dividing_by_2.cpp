#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> freq;

    for (int i=0;i<n;i++) {
        cin >> v[i];
        
        int val = v[i];
        unordered_set<int> visited; 
        
        while (true) {
            if (visited.find(val) == visited.end()) {
                freq[val]++;
                visited.insert(val);
            }
            if (val == 0) break;
            val /= 2;
        }
    }

    int max_ = 0;
    for (auto [val, count] : freq) {
        if (count == n) {
            max_ = max(max_, val);
        }
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int val = v[i];
        while (val > max_) {
            val /= 2;
            ans++;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}