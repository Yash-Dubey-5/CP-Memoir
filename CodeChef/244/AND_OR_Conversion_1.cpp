#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    string a_ = "";
    for(int i=0;i<n;i++) {
        if(i==0 || a[i]!=a[i-1]) {
            a_.push_back(a[i]);
        }
    }


    string b_ = "";
    for(int i=0;i<n;i++) {
        if(i==0 || b[i]!=b[i-1]) {
            b_.push_back(b[i]);
        }
    }

    if(a_.length() > b_.length()) {
        cout << "Yes\n";
    } 
    else if(a_.length() == b_.length()) {
        if(a_ == b_) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    } 
    else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}