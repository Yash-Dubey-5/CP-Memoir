#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n,k;
    cin >> n;
    cin >> k;

    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
        b[i] = a[i]; 
    }

    long long min = 0,max = 0;
    for(int i=0;i<n;i++) {
        min += a[i];
        max += (a[i]+k-1)/k;
    }
    min = (min+k-1)/k;

    cout << min << " " << max << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}