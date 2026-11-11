#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum += a[i];
    }

    priority_queue<int,vector<int>,greater<int>> pq;
    int closes = 0, need = 0;
    for(int s=1;s<=n;s++) {
        pq.push(a[n-s]);
        if(n/2 - (n-s)/2 > need) {
            closes += pq.top();
            pq.pop();
            need++;
        }
    }

    cout << sum - 2*closes << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }

    return 0;
}