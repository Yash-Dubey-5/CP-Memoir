#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,k;
    cin >> n >> k;

    long long min_ = 0, max_ = 0;
    vector<long long> M(n); // Upper Bounds for specific nodes 
    vector<long long> w(n); // Stores the edges that are chosen in MST

    for(int i=1;i<n;i++) {
        min_ += i;
        w[i] = i;

        M[i] = (i*(i-1))/2 + 1;
        max_ += M[i];
    }

    if(k < min_ || k > max_) {
        cout << -1 << endl;
        return;
    }

    long long rem = k - min_;
    long long limit;
    for(int i=n-1;i>0;i--) {
        limit = M[i];
        if(i < n-1) {
            limit = min(limit,w[i+1]-1);
        }
        long long add = min(rem,limit-w[i]);
        w[i] += add;
        rem -= add;
    }

    long long size = (n*(n-1))/2 + 1;
    vector<bool> used(size,false); 
    for(int i=1;i<n;i++) {
        used[w[i]] = true;
    }
    
    long long placer = size - 1; 
    vector<vector<long long>> ans(n+1,vector<long long> (n+1,0));

    for(int i=n-1;i>=1;i--) {
        ans[1][i+1]=w[i];
        ans[i+1][1]=w[i];
            for(int j=2;j<=i;j++) {
                while(placer>0 && used[placer]) placer--;
                    ans[j][i+1] = placer;
                    ans[i+1][j] = placer;
                    used[placer] = true;
            }   
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}