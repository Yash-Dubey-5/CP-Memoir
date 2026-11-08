#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    vector<int> evenA, oddA, evenB, oddB;

    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2) oddA.push_back(i);
            else evenA.push_back(i);
        }
    }

    for (int i = 0; i < n; i++) {
        if (b[i] == '1') {
            if (i % 2) oddB.push_back(i);
            else evenB.push_back(i);
        }
    }

    if (evenA.size() != evenB.size() || oddA.size() != oddB.size()) {
        cout << -1 << endl;
        return;
    }

    long long ans = 0;
    for (int i = 0; i < evenA.size(); i++)
        ans += abs(evenA[i] - evenB[i]) / 2;

    for (int i = 0; i < oddA.size(); i++)
        ans += abs(oddA[i] - oddB[i]) / 2;

    cout << ans << endl;
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