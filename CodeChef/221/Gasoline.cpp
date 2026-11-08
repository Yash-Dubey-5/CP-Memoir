#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const ll INF = 1e18;
const int MOD = 1e9 + 7;

void commence() {
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    
    vector<int> pre;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++) {
        for(int j=0;j<k;j++) {
            pq.push(a[i]);
        }
        pre.push_back(pq.top());
        pq.pop();
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
    return 0;
}