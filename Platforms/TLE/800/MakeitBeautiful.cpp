#include<bits/stdc++.h>

using namespace std;


void commence() {
    int n,x;
    cin >> n;

    bool all_same = true; 
    vector<int> a;

    for(int i=0;i<n;i++) {
        cin >> x;
        a.push_back(x);
        if(i>0 && a[i] != a[0]) {
            all_same = false;
        }
    }
    

    if(all_same) {
        cout << "No" << endl;
        return;
    }

        sort(a.begin(),a.end());

        cout << "Yes" << endl;
        cout << a[n-1] << " ";
        for(int i=0;i<n-1;i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }


int main() {
    int t;
    cin >> t;
    while(t--) {
        commence();
    }
}