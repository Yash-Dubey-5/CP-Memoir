#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n%3==0) {
        cout << 0 << endl;
    } else if((((n/5)+1)*5)%3==0 || (n+1)%3 == 0){
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
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