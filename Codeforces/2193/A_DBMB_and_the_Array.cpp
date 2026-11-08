#include <bits/stdc++.h>

using namespace std; 
#define int long long

void commence() {
    int n,s,x; 
    cin >> n >> s >> x;

    int sum = 0,temp;
    for(int i=0;i<n;i++) {
        cin >> temp;
        sum += temp;
    }

    if((s-sum)%x == 0 && s>=sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
    return 0;
}