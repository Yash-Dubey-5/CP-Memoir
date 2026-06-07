#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define mi1 cout << -1 << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const ll INF = 1e18;
const int MOD = 1e9 + 7;

void commence() {
    long long a, b;
    cin >> a >> b;

    if (a < b) swap(a, b);
    
    if (a == b) {
        cout << 0 << "\n";
        return;
    }

    if (a % b != 0) {
        cout << -1 << "\n";
        return;
    }

    long long ratio = a / b;
    int k = 0;
    
    //Runs max-to-max 60 times since log2(10^18)~59.79
    while (ratio % 2 == 0) {
        ratio /= 2;
        k++;
    }

    if (ratio != 1) {
        cout << -1 << "\n";
        return;
    }

    //Nice Greedy approach to fill a jar with tennis-balls,ping-pong then sand and then water analogy 
    int ans = 0;
    ans += (k / 3); 
    k %= 3;
    ans += (k / 2); 
    k %= 2;
    ans += k;      

    cout << ans << "\n";
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





/*Don't overcomplicate this one with log2() as it returns double and might cause issue in calculation.
It requires some level level of insight to perform just do basic while loop because a,b have 10^18 values,
when taken log2(10^18)~10^6 so under time of 10^8.*/