#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n,x;
    cin >> n;
    vector<int> a;

    if(n<2) {
        cout << -1 << endl;
        return;
    }
    for(int i=0;i<n;i++) {
        cin >> x;
        a.push_back(x);
    }

    int p=0,q=n-1;
    int l_sum=a[p],r_sum=a[q];
    while(p<q-1) {
        if(l_sum > r_sum) {
            q--;
            r_sum += a[q];
        } else if(l_sum < r_sum) {
            p++;
            l_sum += a[p];
        } else {
            p++;
            l_sum += a[p];
        }
    }
    if(l_sum == r_sum) {
        cout << p << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}