#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int m = 3;
    vector<int> b(m,0);
    for(int i=0;i<n;i++) {
        b[a[i]%m]++;
    }

    int ans = 0,k;
    for(int i=0;i<2*m;i++) {
        k=i%m;
        if(b[k]>(n/m)) {
            ans+=b[k]-(n/m);
            b[(k+1)%m] += b[k] - (n/m);
            b[k] = n/m;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}