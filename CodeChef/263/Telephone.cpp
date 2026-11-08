#include <bits/stdc++.h>
using namespace std;

#define int long long
int INF = LLONG_MAX;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    int mx=*max_element(a.begin(),a.end());

    vector<array<int,2>> dist(n,{INF,INF});
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++) {
        if(a[i]==mx) {
            dist[i][0]=0;
            q.push({i,0});
        }
    }
    while(!q.empty()) {
        auto [i,p]=q.front();
        q.pop();
        for(int j:{(i+1)%n,(i-1+n)%n}) {
            if(dist[j][1-p]==INF) {
                dist[j][1-p]=dist[i][p]+1;
                q.push({j,1-p});
            }
        }
    }
    int te=0,to=0;
    for(int i=0;i<n;i++) {
        te=max(te,dist[i][0]);
        to=max(to,dist[i][1]);
    }
    int ans=min(te,to);
    cout << (ans==INF ? -1 : ans) << '\n';
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