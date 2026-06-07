#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n,k;
    cin >> n >> k;

    int med = (n+1)/2;
    long long int sum = 0;
    vector<int> a(n*k);

    for(int i=0;i<n*k;i++) {
        cin >> a[i];
    }
    
    for(int i = n*k-(n-med)-1,count=0;count<k;count++,i-=n-med+1) {
        //cout << a[i] << " ";
        sum += a[i];
    }
    //cout << endl;
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}