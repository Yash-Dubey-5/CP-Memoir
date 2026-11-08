#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<int> a(x), b(y);
    for (int i = 0; i < x; i++)
        cin >> a[i];
    for (int i = 0; i < y; i++)
        cin >> b[i];

    int sum_a = 0, sum_b = 0;

    for (int i = x - 1, cnt = 0; i >= 0 && cnt < n; i -= 2, cnt++)
        sum_a += a[i];

    for (int i = y - 1, cnt = 0; i >= 0 && cnt < m; i -= 2, cnt++)
        sum_b += b[i];

    set<int> s;

    if (sum_a > sum_b) {
        for (int i = x - 1, cnt = 0; i >= 0 && cnt < n; i -= 2, cnt++)
            s.insert(a[i]);

        int j = y - 1;
        int take = m;

        while (j >= 0 && take > 0) {
            if (s.find(b[j]) == s.end())
                sum_a += b[j];
            j -= 2;
            take--;
        }

        cout << sum_a << '\n';
    } else {
        for (int i = y - 1, cnt = 0; i >= 0 && cnt < m; i -= 2, cnt++)
            s.insert(b[i]);

        int j = x - 1;
        int take = n;

        while (j >= 0 && take > 0) {
            if (s.find(a[j]) == s.end())
                sum_b += a[j];
            j -= 2;
            take--;
        }

        cout << sum_b << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}