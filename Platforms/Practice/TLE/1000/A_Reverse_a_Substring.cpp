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
    cin >> n; //Just to avoid error

    string temp,s;
    cin >> s;
    temp = s;

    sort(temp.begin(),temp.end()); //Find the lowest in lexicographical order

    //Find non-matching w.r.t. the least lexicographical string
    int i=0;
    while(temp[i] == s[i] && i<n) {
        i++;
    }
    int j;
    for(j=i;j<n;j++) {
        if(temp[i]==s[j]) {
            break;
        }
    }

    if(i==n) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << i+1 << " " << j+1 << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(10);
    int t=1;
    //cin >> t;
    while(t--) {
        commence();
    }
    return 0;
}



/*Just sort the array and then traverse until the non-matching element of the given and the sorted array,
 and then find the non-matching in the give array and display those two numbers*/