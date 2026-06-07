#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define f(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define sz(x) (int)(x).size()
const ll INF = 1e18;
const int MOD = 1e9 + 7;

void commence() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> freq(26, 0);

    for (char c : s) {
        char lower_c = tolower(c);
        freq[lower_c - 'a']++;
    }

    sort(freq.begin(), freq.end(), greater<int>());

    if (freq[0] == n) {
        cout << n << endl;
    } else {
        cout << freq[0] + freq[1] << endl;
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