#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> pos(51, 1e9);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = min(pos[a[i]], i + 1); // store first occurrence
    }

    while (q--) {
        int c;
        cin >> c;

        int p = pos[c];
        cout << p << " ";

        // shift all colors above it
        for (int i = 1; i <= 50; i++) {
            if (pos[i] < p) pos[i]++;
        }

        // move c to top
        pos[c] = 1;
    }

    cout << "\n";
}