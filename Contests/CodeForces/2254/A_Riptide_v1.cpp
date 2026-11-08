#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;

    while (true) {
        if (a == b || b == c || a == c)
            break;

        if (a > b && a > c) {
            if (b < c) {
                a--;
                b++;
            } else {
                a--;
                c++;
            }
        }
        else if (b > a && b > c) {
            if (a < c) {
                b--;
                a++;
            } else {
                b--;
                c++;
            }
        }
        else {
            if (a < b) {
                c--;
                a++;
            } else {
                c--;
                b++;
            }
        }
        ans++;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}