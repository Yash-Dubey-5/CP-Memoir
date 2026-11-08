#include <bits/stdc++.h>
using namespace std;


void solve() {
    int x,y;
    cin >> x >> y;

    for (long long days = 1; ; days++) {

        for (long long K = 1; K <= days; K++) {

            long long sumSquares =
                K * (K + 1) * (2 * K + 1) / 6;

            long long earned =
                y * (sumSquares + (days - K) * K * K);

            long long cost = K * x;

            if (earned > cost) {
                cout << days << '\n';
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}