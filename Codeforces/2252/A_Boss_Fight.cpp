#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> freq;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        freq[x]++;
    }

    int highestCount = 0;
    int value = 0;

    for (auto [num, cnt] : freq) {
        if (cnt > highestCount) {
            highestCount = cnt;
            value = num;
        }
    }

    int otherCount = n - highestCount;
    int error = max(0, highestCount - (otherCount + 2));

    cout << sum - 1LL * error * value << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}