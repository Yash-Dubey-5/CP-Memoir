#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> cnt(3, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x % 3]++;
        }

        long long target = n / 3;
        long long moves = 0;

    for (int i = 0; i < 6; i++) {
    int idx = i % 3;
    if (cnt[idx] > target) {
        long long extra = cnt[idx] - target;
        cnt[idx] -= extra;
        cnt[(idx + 1) % 3] += extra;
        moves += extra;
    }
}


        cout << moves << '\n';
    }
}
