//Marathon
#include<bits/stdc++.h>

using namespace std;

void commence() {
    int a,x;
    cin >> a;

    int ans=0;
    for(int i=1;i<=3;i++) {
        cin >> x;
        if(x>a) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}