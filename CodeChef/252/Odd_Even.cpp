#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long odd=0,even=0;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        if(v[i]%2==0) {
            even++;
        } else {
            odd++;
        }
    }

    long long ans = 2*min({odd,even})+1;
    cout << min(ans,n) << endl;

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