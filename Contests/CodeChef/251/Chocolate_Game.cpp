#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    int odd_index = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        if(a[i]%2 != 0) {
            odd_index++;
        }
        sum += a[i];
    }
    if(sum %2 == 0) {
        if(odd_index%2==0) 
            cout << sum - odd_index/2 << endl;
        else 
            cout << sum - (odd_index+1)/2 << endl;
    } else {
        if(odd_index%2 == 0) 
            cout << odd_index/2 << endl;
        else 
            cout << (odd_index-1)/2 << endl;
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