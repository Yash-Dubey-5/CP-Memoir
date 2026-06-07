#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int l=0,r=n-1;
    int curMax = n;
    int flag = 1;
    while(l<r) {
        if(a[l] == curMax) {
            l++;
            curMax--;
        } else if(a[r] == curMax) {
            r--;
            curMax--;
        } else {
            flag = 0;
            break;
        }
    }

    if(flag) {
        cout << "NO" << endl;
    } else {
        for(int i=0;i<n;i++) {
            if(a[i] == curMax) {
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
                break; 
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}