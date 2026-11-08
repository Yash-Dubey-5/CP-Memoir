#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define fn(n,i) for(int i=n-1;i>=0;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const ll INF = 1e18;
const int MOD = 1e9 + 7;

void commence() {
    int n;
    cin >> n;
    
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    int prev_max = 0;
    bool ans = true;
    for(int i=0;i<n;i++) {
        if(a[i]>b[i]) {
            ans = false;
            break;
        } else if(a[i]<b[i]){
            if(prev_max >= a[i]) {
                ans = false;
                break;
            }
        }
        prev_max = max(a[i],prev_max);
    }

    if(ans) {
        yes;
    } else {
        no;
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