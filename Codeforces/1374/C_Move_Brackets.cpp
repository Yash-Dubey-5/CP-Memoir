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

    stack<char> st; 
    for(int i = 0; i < n; i++) {
        if(!st.empty() && st.top() == '(' && s[i] == ')') {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }

    cout << (st.size())/2 << "\n"; 
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



// Use basic bracket matching with stack and the number of times we have to swap will be equal to |stack|/2