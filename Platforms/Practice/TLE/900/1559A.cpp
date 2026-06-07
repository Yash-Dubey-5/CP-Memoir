#include<bits/stdc++.h>

using namespace std;

void commence() {
    long long n;
    cin >> n;
    
    vector<long long> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    long long ans=a[0];
    for(int i=1;i<n;i++) {
        ans &= a[i];
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