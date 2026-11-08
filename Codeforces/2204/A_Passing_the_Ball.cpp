#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans;
        for(int i=0;i<s.size();i++) {
            if(s[i] == 'L') {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
}