#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 &&
               a[j] < a[j - 1] &&
               abs(a[j] - a[j - 1]) > 1) {

            swap(a[j], a[j - 1]);
            j--;
        }
    }

    for (int x : a) {
        cout << x << " ";
    }

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}