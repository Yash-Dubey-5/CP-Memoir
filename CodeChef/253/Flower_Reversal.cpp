#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;
    int segments = 1;

    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {
            ++ans;
        } else {
            ++segments;
        }
    }

    if (segments >= 4) {
        cout << ans + 2 << '\n';
    } else if (segments == 3) {
        cout << ans + 1 << '\n';
    } else {
        cout << ans << '\n';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}