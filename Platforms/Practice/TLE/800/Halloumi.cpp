#include<bits/stdc++.h>

using namespace std;

void commence() {
    int n,k,x;
    vector<int> bruh;
    bool check = true;
    cin >> n >> k;

    for(int i=0;i<n;i++) {
        cin >> x;
        bruh.push_back(x);
        if(i >= 1 && bruh[i] == bruh[i-1]) {

        } else if(i >= 1 && bruh[i] != bruh[i-1]) {
            check = false;
        }
    }
    if(k <=1 && check == false) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}