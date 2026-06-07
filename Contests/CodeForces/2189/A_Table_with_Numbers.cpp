#include <bits/stdc++.h>

using namespace std; 
#define int long long

void commence() {
    int n,h,l;
    cin >> n >> h >> l;
    
    int valid_h = 0,valid_l = 0;
    int UB,LB;
    if(h>l) {
        UB = h;
        LB = l;
    } else {
        UB = l;
        LB = h;
    }
    int x,extra = 0;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(x<=h) {
            valid_h++;
        }
        if(x<=l) {
            valid_l++;
        }
        if(x > UB) {
            extra++;
        }
    }
    //cout << valid_h << " " << valid_l << " " << (n-extra)/2 << endl;
    cout << min({valid_h,valid_l,(n-extra)/2}) << endl;
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