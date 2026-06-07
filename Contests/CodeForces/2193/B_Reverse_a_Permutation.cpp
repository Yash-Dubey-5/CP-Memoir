#include <bits/stdc++.h>

using namespace std; 
#define int long long

void commence() {
    int n;
    cin >> n;

    vector<int> a(n),ideal(n); 
    for(int i=0;i<n;i++) {
        cin >> a[i];
        ideal[i] = i+1;
    }

    int ind,val;
    bool per = true;
    for(int i=0;i<n;i++) {
        if(a[i] != n-i) {
            ind = i;
            val = n-i;
            per = false;
            break;
        }
    }

    if(per == false) {
        int p = ind,q;
        for(int i=ind;i<n;i++) {
            if(a[i] == val) {
                q = i;
                break;
            }
        }
        reverse(a.begin()+p,a.begin()+q+1);
    }



    for(int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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