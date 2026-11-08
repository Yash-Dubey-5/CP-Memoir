#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int runs = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) runs++;
    }

    int temp = 0;

    for (int i = 1; i <= n - 2; i++) {
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            if (s[i - 1] == s[i + 1])
                temp = max(temp, 2);
            else
                temp = max(temp, 1);
        }
    }

    cout << runs - temp << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}