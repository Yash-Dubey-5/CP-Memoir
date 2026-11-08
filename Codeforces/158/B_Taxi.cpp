#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n;
    cin >> n;
    int a[4] = {0};

    int s;
    for(int i=0;i<n;i++) {
        cin >> s;
        a[s-1] += 1;
    }

    int ans=a[3];

    ans += a[2];
    a[0] = max(0,a[0]-a[2]);

    ans += a[1]/2;
    if(a[1]%2 != 0) {
        ans++;
        a[0] = max(0,a[0]-2);
    }


    if(a[0]>0) {
        ans += (a[0]+3)/4;
    }
    
    cout << ans << endl;
}


int main() {
    int t=1;
    //cin >> t;
    while(t--) {
        commence();
    }
}