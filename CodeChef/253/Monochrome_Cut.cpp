#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> a(n);
    int max_val = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
        if(a[i].first > max_val) max_val = a[i].first;
    }
    
    string s;
    cin >> s;
    
    vector<int> pref01(n + 1, 0), pref10(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref01[i + 1] = pref01[i] + (s[i] == '0' && s[(i+1) % n] == '1' ? 1 : 0);
        pref10[i + 1] = pref10[i] + (s[i] == '1' && s[(i+1) % n] == '0' ? 1 : 0);
    }
    
    vector<int> max_indices;
    for (int i = 0; i < n; i++) {
        if (a[i].first == max_val) max_indices.push_back(a[i].second);
    }
    
    sort(a.rbegin(),a.rend());
    
    for (auto& item : a) {
        int val = item.first;
        int j = item.second;
        
        for (int i : max_indices) {
            if (i == j) continue;
            
            int u = min(i, j);
            int v = max(i, j);
            
            int c01_path1 = pref01[v] - pref01[u];
            int c10_path1 = pref10[v] - pref10[u];
            
            int c01_path2 = pref01[n] - c01_path1;
            int c10_path2 = pref10[n] - c10_path1;
            
            if ((c01_path1 > 0 && c10_path2 > 0) || (c10_path1 > 0 && c01_path2 > 0)) {
                cout << (long long)max_val + val << "\n";
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}