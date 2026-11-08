#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=1;
	cin >> t;
	while(t--) {
	    int n,x;
	    int l,r;
        cin >> n;
        cin >> l >> r;  
	    vector<int> v(n);
	    for(int i=0;i<n;i++) {
            cin >> v[i];
	    }
	    int left = 0, right = 0;
        for(int i=0;i<l-1;i++) {
            left += v[i];
        }
        for(int i=n-1;i>=r;i--) {
            right += v[i];
        }
        int ans = max(left,right);
	    cout << ans << endl;
	}

}
